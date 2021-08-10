/*

Write a C program to take 5 names as input and print the longest name.

Coded By : Harish Kumar
Date : 20/7/2021

*/

#include<stdio.h>
#include<conio.h>


//declaring the helper function getLen() for reteriving length of char const
int getLen(char *p){
int i=0; //intinlizing and declaring counter variable

while(p[i] != '\0')
i++;  //incrementing i untill p not reach null character

return i; //returning the length of p pointer
}

void main(){
//variables declarations
char *name[5];  //array of char pointer to store names
char *max; //a char pointer for pointing to longest name
int i = 0;      //counter variable

// clearing output screen
clrscr();

//Asking for names
printf("Enter 5 Names \n");
for(i = 0 ; i < 5 ; i++) {
   printf("Name %d: ",i + 1);
   gets(name[i]);   //input names
 }

/* Main Logic Starts from here */
max = name[0]; //asuming longest name to be first one
for(i = 1 ; i < 5 ; i++)
  if( getLen(name[i]) > getLen(max) ) max = name[i]; //testing for length of variable if length of name higher than intitial pointer max then replacing max by that name

//printing the longest name
printf("\nLongest name is %s", max);

//Holding the output screen with a message
printf("\nPress Any key to Exit...");
getch();

}
