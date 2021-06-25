/*

Write a C program to define a macro that can calculate the greater of two of its arguments. Use this macro to calculate the greatest of 4 integers.

Coded By : Harish Kumar
Date : 25/06/2021

*/

#include<stdio.h>
#include<conio.h>
#define MAX(A,B) ( (A) > (B) ? (A) : (B) ) //MAX macro

void main()
{
//declaring variables
int a,b,c,d, res;

//clearing output screen
clrscr();

//asking User for four numbers
printf("Enter Four Numbers :");
scanf("%d%d%d%d", &a,&b,&c,&d);

//calculating gratest of four number
//calling MAX for first two numbers then last two numbers
//then result of both call is again send MAX for final evaluation
//that is stored in res
res= MAX(MAX(a,b),MAX(c,d));

//finally printing the ans
printf("\n MAX value is %d", res);

//holding the output screen with message
printf("\n Press any key to Exit...");
getch();
}
