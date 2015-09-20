/*******************************************************************************
 * Licensed Materials - Property of IBM
 * (c) Copyright IBM Corporation 2012, 2013. All Rights Reserved.
 * 
 * Note to U.S. Government Users Restricted Rights:  
 * Use, duplication or disclosure restricted by GSA ADP Schedule 
 * Contract with IBM Corp. 
 *******************************************************************************/
jazz = window.jazz || {};
jazz.app = {iframeI18n : {}};

jazz.app.iframeI18n.updateBidiStyles = function() {
	try {
		if (!window.localStorage){
			return;
		}
		var bidiOn = localStorage.getItem("jazz.app.i18n.preferences.bidiOn");
		var textDir;
		if (!bidiOn || bidiOn != "true"){
			textDir = "none";
		}
		else{
			textDir = localStorage.getItem("jazz.app.i18n.preferences.baseTextDirection");
			if (!textDir){
				textDir = "ltr";
			}
		}
		var getBTDSensitiveNodes = function(root,fClass, fTag){
			var result = [];
			if (root.getElementsByClassName){
				result = root.getElementsByClassName(fClass);
			}
			else {
				var arrIE = root.getElementsByTagName(fTag);
			    for (var i=0; i<arrIE.length; i++){
			    	var element = arrIE[i];
			    	if (element.className && element.className.indexOf(fClass) >= 0){
			    		result.push(element);
			    	}
			    }
			}
			return result;
		};
		var defDir = document.body.currentStyle? document.body.currentStyle.direction : window.getComputedStyle(document.body, null).direction;
		var getStringBaseTextDir = function(text,dir){
	   		var len = text.length;
	   		for(var i = 0;i < len;i++)  {
	  			var c = text.charCodeAt(i);
	  			if (c >= 0x05d0 && c <= 0x05ff ||
	  					c >= 0x0600 && c <= 0x065f ||
	  					c >= 0x06fa && c <= 0x07ff ||
	  					c >= 0xfb50 && c <= 0xfdff ||
	  					c >= 0xfe70 && c <= 0xfefc){
	     			return "rtl";
	     		}
	  			if((c > 64 && c < 91)||(c > 96 && c < 123)){
	  				return "ltr";
	     		}
	   		}
	   		return dir;		
		};
		//Content
		var arr = getBTDSensitiveNodes(document.body,"btd","*");
		for (var i=0; i<arr.length; i++){
			var node = arr[i];
			var text = node.innerHTML.replace(/<[^<]*>/g,"");
			var dir = textDir;
			if (dir == "auto" && !!text && text.length > 0){
				dir = getStringBaseTextDir(text);
			}		
			if (textDir != "none")
				node.style.direction = dir;
			else
				node.style.direction = defDir;
			var cssDisplay = node.currentStyle? node.currentStyle.display : window.getComputedStyle(node, null).display;
			if (cssDisplay == "inline"){
				node.style.unicodeBidi = "embed";	
				var tNode = node.nextSibling;
				if (tNode && tNode.nodeValue && (tNode.nodeValue == "\u200e" || tNode.nodeValue == "\u200f")){
					if (textDir == "none"){
						node.parentNode.removeChild(tNode);
					}
					else {
						tNode.nodeValue = defDir == "rtl"? "\u200f" : "\u200e";
					}
				}
				else if (textDir != "none"){
					tNode = document.createTextNode(defDir == "rtl"? "\u200f" : "\u200e");
					node.parentNode.insertBefore(tNode,node.nextSibling);
				}
			}
			else {
				node.style.textAlign = defDir == "rtl"? "right" : "left";
			}
		}
		//Title
		arr = getBTDSensitiveNodes(window.parent.document.body,"titleIndent","div");
		if (arr[0] && arr[0].firstChild && arr[0].firstChild.nodeType == 1){
			var anchor = arr[0].firstChild;
			var text = anchor.innerHTML.replace(/<[^<]*>/g,"");
			var dir = textDir;
			if (dir == "auto" && !!text){
				dir = getStringBaseTextDir(text);
			}				
			var node = anchor.firstChild;
			if (!!node && !!node.nodeValue && node.nodeValue.indexOf(": ") > 0){
				text = node.nodeValue.replace(/[\u200e\u200f\u202a\u202b\u202c]/g,"");
				if (textDir != "none"){
					var pos = text.indexOf(": ") + 2;
					text = text.substring(0,pos) + (dir == "rtl"? "\u202b" : "\u202a") + text.substring(pos) + "\u202c";
				}
				node.nodeValue = text;	
			}
			else if (textDir != "none"){
				anchor.style.direction = dir;
				anchor.style.unicodeBidi = "embed";
			}
			else{
				anchor.style.direction = defDir;
				anchor.style.unicodeBidi = "";			
			}
		}
	} catch(e) {
		// fail silently on errors
		// see work item 209522
	}
};
