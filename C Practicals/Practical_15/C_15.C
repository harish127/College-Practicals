/*

Write a C program that will ask the user to input a file name and copy the contents of that file into another file.

Created By: Harish Kumar
Date: 18/8/2021

*/

#include<stdio.h>
#include<conio.h>

void main(){
//Variable Decleration
char *sourcef, *destif;
int c;

//Declaration of FILE pointer
FILE *fp,*fp2;

//clearing of output screen
clrscr();

//Asking the user for input and output filenames
printf("Enter the Source File Name: ");
gets(sourcef);
printf("Enter the Destination File Name: ");
gets(destif);


if((fp= fopen(sourcef,"r")) == NULL){ //Checking if file exist or not
 printf("Can't open the file %s",sourcef);
 getch();
 return;
}
else{
  if((fp2 = fopen(destif,"w")) != NULL ){ //Checking if file is accessable or not
  while((c=getc(fp)) != EOF)
  putc(c,fp2);
  printf("File Copied Sucessfully...");
  }else{
      printf("Error Copying to %s",destif);
      getch();
      return;
  }
  }
  //Closing the both the file
  fclose(fp);
  fclose(fp2);
  getch();
}