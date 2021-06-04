/*
Write a C program to take a 5-digit number as input and calculate the sum of its digit

Coded By: Harish Kumar
Date: 3/6/2021
*/
#include<stdio.h>
#include<conio.h>

void main()
{

//variables for 5-digit no n, holding sum value
int n, sum=0;

//for clearing output console screen
clrscr();

//asking user for a 5-digit no
printf("Enter a 5-didgit number :");
scanf("%d",&n);

//looping untill n!=0
//basically it remainder out last digit of number and sum the digit value together
while(n){
sum+=n%10;
n/=10;
}

//Printing the sum variable
printf("Sum is %d",sum);

//pause the console
getch();

}