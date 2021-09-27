/*

Write a Program to find sum of the following series using function declaration: Sum= x-(x)3/3!+(x)5/5!-………..(x)n/n!.

Coded by: Harish Kumar
Date: 27/09/2021

*/

#include<iostream>

using namespace std;

//helper function to find factorial of any number
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

//function to find sum of series 
double sumSeries(int x, int n){
    //temporary variables declarations 
    short sign=-1; //maintains the current sign of term
    double Sum=0; //stores the sum of each term 
 for(int i=0, j=1;i<n;i++,j+=2){
     sign*=(-1); //Updating the sign
     Sum += x*((float)j/fact(j))*sign;  //casting to float else it wil give integer divison 
 }   
 return Sum;
}

int main(){
    //Variables declerations
    int n, x;

    //asking the user for input
    cout<<"\nEnter the value of x and n: ";
    cin>>x>>n;

    //calling sumSeries() and displaying the sum
    cout<<"\nSum of the series is "<<sumSeries(x,n)<<".";
}