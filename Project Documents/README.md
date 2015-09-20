Setting up the DataBase
1.	Download database manager here https://www.microsoft.com/en-us/download/details.aspx?id=29062
  a.	Select the file that fits you operating system
2.	Open SQL Server Management Studio
  a.	Server Name should be  “computersName\SQLEXPRESS”
  b.	Select windows Authentication
  c.	Hit connect
3.	Right Click Databases from the side menu and select new database
  a.	Name it “Stadiums” this is to insure that we all use the same name so it doesn’t have trouble connecting on different computers
  b.	Click add
4.	Go to the desktop start menu and search for “Data Sources (ODBC)” and open it
  a.	In the “User DSN” tab click add
  b.	Select SQL Native Client 11.0 
  c.	Name it “Stadiums”
  d.	Description is optional
  e.	Type in the “computerName\SQLEXPRESS” like you did when connecting to management studio and click next
  f.	 Select “with integrated Windows authentication” and click next
  g.	Check the  “change the default database to and select the stadiums database and then click next
  h.	On the next page just hit finish
5.Hit test data source to know that it is working then click ok and then ok again then ok again

P.S. You have to launch the Microsoft SQL Server Manager and hit connect every time you want to work so it has a database to connect to.
