/*

Write a C program to print the sum of first N even numbers using recursive function.

Coded By : Harish Kumar
Date : 1/7/2021

*/

#include<stdio.h>
#include<conio.h>

//function declaration of sumEven()
int sumEven(int);

void main(){
//declaring two variables n for storing number and sum for storing sum of even number
int n , sum;

//clearing output screen
clrscr();

//asking user for any number
printf("Enter any number : ");
scanf("%d", &n);

//calling fuction sumEven() and storing the return value on sum variable
sum=sumEven(n);

//Printing the sum variable
printf("\nSum of Even number is %d", sum);

//Holding the output screen
printf("\nPress any key to Exit...");
getch();
}

//function defination of sumEven()
int sumEven(int no){


  if(no<=0) return no; //base case

  else if(no%2==0) return no+sumEven(no-1); //if no is even number so sum it

  else sumEven(no-1); //if no is odd don't sum it
}