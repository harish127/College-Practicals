/*

Write a C Program to define a function that will take integer as argument and return the sum of digits of that integer.

Coded By : Harish Kumar
Date : 13/6/2021

*/

#include<stdio.h>
#include<conio.h>

//function that take integer as argument and return sum of digits
int digitSum(int no){
//variable for storing sum of digits
int sum=0;
//this loop adds up last digit of number
//by % operator then number is divided by 10 to
//overflow the last digit and so on untill
//it becomes zero
while(no){
sum+=no%10;
no/=10;
}
//returning the calculated sum value
return sum;
}

//main function
void main(){
//declaring a variable to store user input
int number;

//clearing the output screen
clrscr();

//Asking user for a number and storing to number variable
printf("Enter a Number : ");
scanf("%d",&number);

//calling the function and printing the return value of the function
printf("Sum of the number is %d.",digitSum(number));

//for holding output screen
printf("\n Press any key to Exit ...");
getch();
}