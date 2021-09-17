/* 

Write a program to perform following operations in one dimensional array, Insertion, Deletion and Searching (Linear & Binary).

Coded by: Harish Kumar
Date: 17/09/2021

*/

#include<iostream>
#define MAX_SIZE 100
using namespace std;
bool check_size(int size){
    return size>=MAX_SIZE? false : true;
}

void arr_Insert(int *arr[], int *size_ptr,int val){
    if(check_size(*size_ptr)){
        *arr[*size_ptr]=val;
        *size_ptr++;
    }else{
        cout<<"\nError: Array is full, not able to insert!!";
    }
}


int main(){
    int arr[MAX_SIZE];
    int ch, size=0;
    while (ch!=5)
    {
    cout<<"1. INSERTION \n2. DELETION \n3. SEARCHING(Linear) \n4. SEARCHING(Binary) \n5. EXIT";
    cout<<"\nEnter any choice: ";
    cin>>ch;

    switch (ch)
    {
    case 1:
        int no;
        cout<<"\nEnter number to be inserted: ";
        cin>>no;
        break;
    
    default:
        cout<<"Error: Wrong Choice, Try Again!!";
        break;
    }
    }
    

}
