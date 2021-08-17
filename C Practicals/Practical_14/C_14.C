/*

Write a C program to define a union Contact that will contain the members Mobile no and E-mail Id. Now define a Structure Employee that will contain name, UID, PhNo, emailId and a variable of type Contact as members. The program will ask the user to give the details of five Emloyees including contact details. Print the details of all the Employees.

Coded By: Harish Kumar
Date: 16/8/2021

*/

#include<stdio.h>
#include<conio.h>

//Declarion of Contact of type union with members as
union Contact{
int Mobile_no;
char Email_id[30];
};

//Decleration of Employee of type Structure with members as
struct Employee{
char Name[25];
char Email[30];
long PhNo;
int Uid;
union Contact c;
};

//clearing the input Buffer
void clear(){
while(getchar()!='\n');
}

//Inputing values in Contact Union
void Contact_data(struct Employee *e){
printf("\n \t CONTACT DETAILS \n \t ---------------");
printf("\nEnter Email of Employee: ");
gets(e->c.Email_id);
printf("\nEnter Moblie No of Employee: ");
scanf("%d",&e->c.Mobile_no);
clear();

}

//Inputting values in Employee structure
struct Employee Emp_data(){
struct Employee temp;
printf("\n \t EMPLOYEE DATA \n \t -------------");
printf("\nEnter Name of Employee: ");
gets(temp.Name);
printf("\nEnter Email of Employee: ");
gets(temp.Email);
printf("\nEnter UID of Employee: ");
scanf("%d",&temp.Uid);
printf("\nEnter Phone No of Employee: ");
scanf("%d",&temp.PhNo);
clear();
Contact_data(&temp);
return temp;
}

//Displaying the data from Employee and Contact
void show_data(struct Employee *e){
   printf("EMPLOYEE DETAILS\n");
   printf("\nEmployee UID: %d",e->Uid);
   printf("\nEmployee Name: %s",e->Name);
   printf("\nEmployee Phone No: %d",e->PhNo);
   printf("\nEmployee Email: %s\n",e->Email);
   printf("\nCONTACT DETAILS\n");
   printf("\nEmployee Mobile No: %d",e->c.Mobile_no);
   printf("\nEmployee E-Mail: %s",e->c.Email_id);
}

void main(){
//Declaration of Array of 5 Structure variables
 struct Employee e[5];
 int i=0;
  
//Clearing the output screen
 clrscr();

//Inputting 5 values
while(i<5){
 clrscr();
 printf("Enter Details of Employee %d",i+1);
 e[i]=Emp_data(); //calling Emp_data() function
 i++;
 }

i=0;
//Displaying all 5 Employee data
while(i<5){
  clrscr();
  printf("Details of Employee %d",i+1);
  show_data(&e[i]);  //calling show_data() function 
  printf("\nPress Any Key to continue...");
  getch();
  i++;
  }
}