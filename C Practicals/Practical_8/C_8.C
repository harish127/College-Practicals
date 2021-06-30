/*

Write a C program  to define a recursive function that will print the reverse of its argument.

Coded By: Harish Kumar
Date: 26/6/2021

*/

#include<stdio.h>
#include<conio.h>

//reverse Function Prototype
void reverse(int);

void main()
{
//Declaring a Variable n storing number
int n;

//clearing the output screen
clrscr();

//Asking user for a input
printf("Enter a number :" );
scanf("%d", &n);

//Calling our user define function with paramater n
reverse(n);

//Holding the output screen
printf("Press Any key to Exit...");
getch();

}

//reverse Function Decleration
void reverse(int no){
//Testing for no not 0
if(no%10!=0){
//Printing the last digit of no on each function call
printf("%d",(no%10));

//Recursively calling reverse()
reverse(no/10);
}
}