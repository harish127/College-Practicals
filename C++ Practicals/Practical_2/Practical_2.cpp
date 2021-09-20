/* 

 Write a Program to read number and to display the largest value between: (a) Two number,  (b)Three Numbers,  (c) Four numbers by using switch-case statements. 

Coded By: Harish Kumar
Date: 20/9/2021

*/

#include<iostream>

using namespace std;

//Function to find gratest of two number using switch case
int test_num(int n1,int n2){
    switch (n1>n2)
    {
    case 0: //n2 is gratest
        return n2;
    case 1: //n1 is gratest
        return n1;
    } ;
}

//main() function
int main(){
    //Variable Declration 
    char ch;
    int a,b,c,d,res;

    //Code for Main Menu
    while(ch!='d'){
        cout<<"(a) Two numbers \n(b) Three Numbers \n(c) Four numbers \n(d) Exit";
        cout<<"\nEnter a valid Choice: ";
        cin>>ch;

        switch (ch)
        {
        case 'a': //for Two numbers option
            cout<<"\nEnter two numbers: ";
            cin>>a>>b;
            res = test_num(a,b);
            cout<<"\n Gratest Number is "<<res<<"\n";
            break;

        case 'b': //for Three numbers option
            cout<<"\nEnter three numbers: ";
            cin>>a>>b>>c;
            res = test_num(test_num(a,b),c);
            cout<<"\n Gratest Number is "<<res<<"\n";
            break;

        case 'c': //for four numbers option
            cout<<"\nEnter four numbers: ";
            cin>>a>>b>>c>>d;
            res = test_num(test_num(test_num(a,b),c),d);
            cout<<"\n Gratest Number is "<<res<<"\n";
            break;

        case 'd': //for Exit option
            cout<<"\nExiting out of program...";
            break;

        default: //for Invalid option
            cout<<"\nERROR: Wrong Choice, Try Again!!\n";
            break;
        }
    }
}