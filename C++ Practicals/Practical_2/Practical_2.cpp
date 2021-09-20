/* 

 Write a Program to read number and to display the largest value between: (a) Two number,  (b)Three Numbers,  (c) Four numbers by using switch-case statements. 

Coded By: Harish Kumar
Date: 20/9/2021

*/

#include<iostream>

using namespace std;

int test_num(int n1,int n2){
    return (n1>n2);
}

int main(){
    //Variable Declration 
    char ch;
    int a,b,c,d,res;

    //Code for Main Menu
    while(ch!='d'){
        cout<<"(a) Two numbers \n(b) Three Numbers \n(c) Four numbers \n(d) Exit";
        cin>>ch;

        switch (ch)
        {
        case 'a':
            cout<<"\nEnter two numbers: ";
            cin>>a>>b;

            res = test_num(a,b);
            cout<<"\n Gratest Number is "<<res;
            break;
        
        default:
            break;
        }
    }
}