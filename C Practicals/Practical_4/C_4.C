/*

Write a C Program that will take 3 positive integers as input and verify whether the they form a Pythagorean triplet or not.

Coded By : Harish Kumar
Date : 12/06/2021

*/

#include<stdio.h>
#include<conio.h>

void main()
{

//declaring 3 variables for 3 number
unsigned int a , b, c;

//Clearing the output screen
clrscr();

//Asking user for 3 positive numbers
printf("Enter three Numbers : ");
scanf("%d %d %d",&a,&b,&c);

//Testing for pythagores triplet
if( a*a+b*b == c*c)
  printf("\n The given numbers %d %d %d are Pythagorean Triplets.",a,b,c);
else
  printf("\n The given numbers are not Pythagorean Triplets.");

//holding the output screen
printf("\n Press any key to Exit...");
getch();

}
