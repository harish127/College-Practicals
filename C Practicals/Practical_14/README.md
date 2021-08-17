# Practical 14
## _Write a C program to define a union Contact that will contain the members Mobile no and E-mail Id. Now define a Structure Employee that will contain name, UID, PhNo, emailId and a variable of type Contact as members. The program will ask the user to give the details of five Emloyees including contact details. Print the details of all the Employees._

### Description
- This program will Input 5 Data of Emloyee from user & Print all the Employee data with Contact Details.
- Structure is maintained with members are name, UID, Phno, email and Contact of type union.
- Union is also maintained with members Mobileno and E-mail. 
- A function clear() is used to clear buffer space without it gets() fails to input String type value.
- Two functions Emp_data() and Contact_data() is used for getting input from user.
- A function show_data() is used to display all the data stored in Structure and Union. 
 
### Issuses
- Only data of 5 Employee can be entered.
- While displaying the data of Employee in contact details sometimes Email values come in cryptic values.  

### Output

```

Enter Details of Employee 1
	EMPLOYEE DATA
	-------------

Enter Name of Employee: Harish Kumar
Enter Email of Employee: Harish@domain.com
Enter UID of Employee: 23
Enter Phone No of Employee: 6677438 

	CONTACT DETAILS
	---------------

Enter Email of Employee: Harish2@domain.com
Enter Moblie No of Employee: 2223339

.
.
.

Details of Employee 1
EMPLOYEE DETAILS

Employee UID: 23
Employee Name: Harish Kumar
Employee Phone No: 6677438
Employee Email: Harish@domain.com

CONTACT DETAILS

Employee Mobile No: 2223339
Employee E-Mail: Harish2@domain.com

Press Any Key to Continue...
_ 
```  

