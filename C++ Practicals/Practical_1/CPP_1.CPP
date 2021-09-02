/*

Write a Program to check whether number is prime or not.

Coded By: Harish Kumar
Date: 1/9/2021

*/

#include<iostream.h>
#include<conio.h>

int check_prime(int n){ //Function use to check number is prime or not

  for(int i=2;i<n;i++){
    if(n%i==0)
      return 0;
  }
  return 1;
}

int main(){
 //Clearing the output screen
 clrscr();

 int n; //Variable for storing number entered by the user

 //Asking the user and getting a number
 cout<<"Enter a Number: ";
 cin>>n;

 //Calling the check_prime() function
 if(check_prime(n)) // function returns 1 if no is prime else return 0 if number is not prime
   cout<<"\n"<<n<<" is Prime";
 else
   cout<<"\n"<<n<<" is not Prime";

 //Holding the output screen
 cout<<"\nPress Any key to Exit...";
 getch();

 return 0;
}