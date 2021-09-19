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

int l_Search(int *arr,int size,int item){

    for (int i = 0; i <= size; i++)
    {
        if(arr[i]==item)
            return i;
    }
    return -1;
}

int b_Search(int *arr,int size,int item){
    int start =0, end=size;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==item)
            return mid;
        else if(item>arr[mid]) start=mid+1;
        else end=mid-1;
    }
    return -1;
}

void arr_delete(int *arr, int *size_ptr, int val){
    int ind;
    if((ind=b_Search(arr,*size_ptr,val)) != -1){
        for(int i=ind;i<*size_ptr;i++){
            arr[i]=arr[i+1];
        }
        (*size_ptr)--;
    }
}

void check_index(int indx){
    if(indx==-1) 
        cout<<"\nElement not found in Array!!";
    else
        cout<<"\nElement found at index "<<indx;
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

            case 3:
                cout<<"\nEnter number to be Searched: ";
                cin>>no;
                check_index(l_Search(arr,size,no));
                break;

            case 4:
                cout<<"\nEnter number to be Searched: ";
                cin>>no;
                check_index(b_Search(arr,size,no));
                break;
            case 5:
                cout<<"\nProgram is Exiting..."
                break;
            default:
                cout<<"Error: Wrong Choice, Try Again!!";
                break;
        }
    }
    

}
