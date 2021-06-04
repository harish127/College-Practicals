/*
Write a C program to take three sides of a triangle as input and verify whether the triangle is an isoseles, scalene or an equilateral triangle.

Coded By : Harish Kumar
Date : 04/06/2021
*/

#include<stdio.h>
#include<conio.h>

void main(){

//Variables for holding 3 sides of triangle namely a, b, c
int a=0 , b=0 , c=0;

//clearing the output console
clrscr();

//Asking user for entering 3 values
printf("Enter sides of Triangles :");
scanf("%d %d %d",&a,&b,&c);

//Checking Sides values
if (a==b&&b==c){ //for 3 sides equal
  printf("\n Equilateral Triangle.");
	      }
else if (a!=b && b!=c && c!=a){//for no sides equal
  printf("\n Scalene Triangle.");
		  }
else{// finally two sides equal
  printf("\n Isosceles");
    }

//for holding the output console
getch();
}