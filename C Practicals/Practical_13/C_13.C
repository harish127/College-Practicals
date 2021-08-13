/*

Write a C program to define a structure Student that will contain the members rollno no, name and total marks of a student. The program will ask user to input the details of 5 Student and print details of all the students whose total marks is grater than a given value.

Coded By : Harish Kumar
Date : 11/8/2021

*/

#include<stdio.h>
#include<conio.h>

//A structure of Student
struct Student{
  int roll_no;
  char name[30];
  int total_marks;
};

//Clearing the buffer as it causes problem with gets()
void clear(void){
while(getchar()!='\n');
}

// Function to read data of students
struct Student enter_data(){
  struct Student temp; //temporary decleration of Student

 printf("\nEnter Name: ");
 gets (temp.name);
 printf("Enter Roll Number: ");
 scanf("%d",&(temp.roll_no));
 printf("Enter Total Marks: ");
 scanf("%d", &(temp.total_marks));
 clear();
 return temp;
}



void main(){
//variable decleration
struct Student s[5];
int i=0, total;

//clearing the output screen
clrscr();

//reading data of 5 students
for(i=0;i<5;i++){
  s[i] = enter_data();
}

// clearing the output screen
clrscr();

//Asking marks for comparison
printf("Enter Total Marks: ");
scanf("%d",&total);

//Checking and displaying the data of student
for(i=0;i<5;i++){
  if(s[i].total_marks > total){
  printf("\nName: %s", s[i].name);
  printf("\nRoll No: %d",s[i].roll_no );
  printf("\nTotal Marks: %d\n", s[i].total_marks);
  }
}

//Holding output screen with a message
printf("\nPress Any Key to Exit...");
getch();
}