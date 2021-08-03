/*

Write a C Program to print all prime numbers between a given range of numbers.

Coded By : Harish Kumar
Date : 13/6/2021

*/

#include<stdio.h>
#include<conio.h>

void main()
{
//Decleration of variable
int s , e , i , j , flag=0;

//Clearing the Output Screen
clrscr();

//Asking the user for Range
printf("Enter the Range (4 10)");
scanf("%d %d", &s , &e);

//Testing the Number for Neagative Input
if ( s < 1 || e < 1 ){
  printf("Negative Range Not Allowed!!");
  getch();
  return;
} else if( s > e ) {  //Checking for Incorrect Range if so swapping the values of Range
  int temp = s;
  s = e;
  e = temp;
}

//Main logic for Genration of Prime Number
for(j = s ;j < e ;j++){
  flag = 0;
 for(i = 2;i < j;i++){
    if(j % i == 0 ){
    flag = 1;
    break;
    }
  }
    if(flag != 1) printf("%d ",j);
 }

//Holding Output Screen With a Message
printf("Press Any Key to Exit...");
getch();

}