/*

Write a program to implement stack and perform push and pop operations.

Coded by: Harish Kumar
Date: 30/09/2021

*/

#include<iostream>
#define MAX_SIZE 100  //change this to change the maximum size of array
using namespace std;

//function to check size of array not exceeding its maximum length
bool check_overFlow(int top){
    return top>=MAX_SIZE? true : false;
}

//function to check size of array not less than 0
bool check_underFlow(int top){
    return top<0? true : false;
}

//function to Push an element into Stack from top
void stk_Push(int *arr, int *top_ptr,int val){
    if(!check_overFlow(*top_ptr)){
        arr[++(*top_ptr)]=val;
        cout<<"Element PUSHED\n";
        
    }else{
        cout<<"\nError: Stack is full, not able to PUSH!!\n";
    }
}

//function to pop an element from top of stack
void stk_Pop(int *arr, int *top_ptr){
    if(!check_underFlow(*top_ptr)){
        cout<<"\nPoped Element: "<<arr[(*top_ptr)]<<"\n";
        (*top_ptr)--;
    }else{
        cout<<"\nError: Stack is empty, not able to POP!!\n";
    }
}


int main(){
    //variable declation
    int arr[MAX_SIZE];
    int ch=0, top=-1;

    //Menu System 
    while (ch!=3)
    {   
        cout<<"\t\t\tWELCOME TO STACK IMPLEMENTAION\n";
        cout<<"1. PUSH \n2. POP \n3. EXIT";
        cout<<"\nEnter any choice: ";
        cin>>ch;

        int no;
        switch (ch)
        {
            case 1: //for Push operation
                cout<<"\nEnter number to be Push: ";
                cin>>no;
                stk_Push(arr,&top,no);
                break;

            case 2: //for Pop operation
                stk_Pop(arr,&top);
                break;

            case 3: //for Terminating program
                cout<<"\nProgram is Exiting...";
                break;

            default: //for Invalid input
                cout<<"Error: Wrong Choice, Try Again!!";
                break;
        }
    }
}