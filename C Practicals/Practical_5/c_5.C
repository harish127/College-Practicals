/*

Write a C Program to print all prime numbers between a given range of numbers.

Coded By : Harish Kumar
Date : 13/6/2021

*/
#include<stdio.h>
#include<conio.h>

void main()
{
int n=100,flag=0;
for(int j=1;j<n;j++){
  flag=0;
 for(int i=2;i<j;i++){
  if(j%i==0){
  flag=1;
  break;
  }
  if(flag!=1)
  printf("%d",j);
  }
 }
  getch();
  }