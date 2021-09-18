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

void arr_Insert(int *arr, int *size_ptr,int val){
    if(check_size(*size_ptr)){
        arr[(*size_ptr)]=val;
        (*size_ptr)++;
    }else{
        cout<<"\nError: Array is full, not able to insert!!";
    }
}

int b_Search(int *arr,int size,int val){
    int start =0, end=size;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==val)
            return mid;
        else if(val>arr[mid]) start=mid+1;
        else end=mid-1;
    }
    return -1;
}

void arr_delete(int *arr, int *size_ptr, int val){
    int ind;
    if((ind=b_Search(arr,*size_ptr,val)) != -1){
        cout<<"\nfound at "<<ind;
        for(int i=ind;i<*size_ptr;i++){
            arr[i]=arr[i+1];
        }
        (*size_ptr)--;
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
    int no;
    switch (ch)
    {
    case 1:
        cout<<"\nEnter number to be inserted: ";
        cin>>no;
        arr_Insert(arr,&size,no);
        break;

    case 2:
        cout<<"\nEnter number to be deleted: ";
        cin>>no;
        arr_delete(arr,&size,no);
        break;
    default:
        cout<<"Error: Wrong Choice, Try Again!!";
        break;
    }
    }
    

}
