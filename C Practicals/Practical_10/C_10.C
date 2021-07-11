/*

Write a C program to sort an array using Buble sort technique.

Coded By : Harish Kumar
Date : 3/7/2021

*/

#include<stdio.h>
#include<conio.h>


void main(){
//Declaration of Variables
int arr[5], l=5 ,i=0, j=0 , temp =0;

//Clearing the output screen
clrscr();

//Getting 5 values from the user
while(i<l){
printf("Enter %d element :",i+1);
scanf("%d", &arr[i]);
i+=1;
}

//two for loop buble sort logic
for(i=0;i<l;i++){
  for(j=0;j<l-1;j++){
  //if jth element less than ith element then swap
  if(arr[i]<arr[j]){
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
  }
  }
  }

//Printing the sorted array list
printf("\n Sorted elements are : \n");
i=0;
while(i<l){
printf("%d ",arr[i++]);
}

//Holding the output screen
printf("\nPress Any key to Exit...");
getch();
}
