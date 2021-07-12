/*

Write a C program that will take elements of two integer array of 5 element each, and insert the common elements of both the array into third array(Set intersection)

Coded By : Harish Kumar
Date : 12/7/2021

*/

#include<stdio.h>
#include<conio.h>

void main(){

//Decaling three array variable
int A[5], B[5], C[5], i=0, j=0, k=0;

//Clearing the output screen
clrscr();

//Asking user for entering values to array
printf("Enter elements of first array :");
for(i=0;i<5;i++) scanf("%d",&A[i]);

printf("Enter elements of second array :");
for(i=0;i<5;i++) scanf("%d ",&B[i]);

//Logic for set intersection checking value common to both array putting to third array
for(i=0;i<5;i++){
 for(j=0;j<5;j++){
  if(A[i]==B[j])
  C[k++]=A[i];
  }
 }

//Displaying the final array set intersection one
printf("Enter elements of last Array \n");
 for(i=0;i<k;i++) printf("%d",C[i]);

printf("\nPress any key to exit...");
getch();
}
