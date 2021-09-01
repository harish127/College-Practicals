/*

Write a C program that will take any number of integers from command line as argument and print the sum of all those integers.

Coded By: Harish Kumar
Date: 20/8/2021

*/

#include<stdio.h>
#include<conio.h>

int at(char * snum){ //Function for ASCII to Integer conversion
    int num=0,i=0;
    while(snum[i]!='\0'){
      if(snum[i]>='0' && snum[i]<='9')
	num=10*num+ (snum[i]-'0');
	i++;
      }
    return num;
}

void main(int argc, char *argv[]){
    //Variable Decleration
    int i, sum=0;

    //Clearing the output screen
    clrscr();

   //Fetching numbers from char array passing to at() function
   for(i=1;i<argc;i++){
    char *temp=argv[i];
    sum+=at(temp);
  }
    //Displaying the sum of the Numbers
    printf("\nSum: %d",sum);

    //Pausing the output screen
    printf("\nPress Any key to Exit...");
    getch();
}