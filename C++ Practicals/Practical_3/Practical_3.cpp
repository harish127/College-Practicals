/*

Write a Program to find sum of first natural numbers: sum= 1+2+3+4+……. 100 by using for loop.

Coded By: Harish Kumar
Date:24/09/2021

*/

#include<iostream>
using namespace std;

//main fuction starts
int main(){

    //Variables declarations
    int n;

    //user input
    cout<<"Enter Value of N: ";
    cin>>n;
    
    //Calculating sum
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    
    //Outputing results
    cout<<"\nSum of First Natural numbers are "<<sum<<".";
}