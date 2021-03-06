/* 

Write a program to perform following operations in one dimensional array, Insertion, Deletion and Searching (Linear & Binary).

Coded by: Harish Kumar
Date: 17/09/2021

*/

#include<iostream>
#define MAX_SIZE 100  //change this to change the maximum size of array
using namespace std;

//function to check size of array not exceeding its maximum length
bool check_size(int size){
    return size>=MAX_SIZE? false : true;
}

//function to insert an element into array from back
void arr_Insert(int *arr, int *size_ptr,int val){
    if(check_size(*size_ptr)){
        arr[(*size_ptr)]=val;
        (*size_ptr)++;
    }else{
        cout<<"\nError: Array is full, not able to insert!!\n";
    }
}

//function implementing linear search on array
int l_Search(int *arr,int size,int item){

    for (int i = 0; i <= size; i++)
    {
        if(arr[i]==item)
            return i;
    }
    return -1;
}

//function implementing binary search on array
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

//function delete an element from array
void arr_delete(int *arr, int *size_ptr, int val){
    int ind;
    if((ind=b_Search(arr,*size_ptr,val)) != -1){
        for(int i=ind;i<*size_ptr;i++){
            arr[i]=arr[i+1];
        }
        (*size_ptr)--;
    }else{
        cout<<"\nElement not found in Array!!\n";
    }
}

//function check return of index linear or binary search function and to print a message accordingly
void check_index(int indx){
    if(indx==-1) 
        cout<<"\nElement not found in Array!!\n";
    else
        cout<<"\nElement found at index "<<indx<<"\n";
}



int main(){
    //variable declation
    int arr[MAX_SIZE];
    int ch, size=0;

    //Menu System 
    while (ch!=5)
    {
        cout<<"1. INSERTION \n2. DELETION \n3. SEARCHING(Linear) \n4. SEARCHING(Binary) \n5. EXIT";
        cout<<"\nEnter any choice: ";
        cin>>ch;

        int no;
        switch (ch)
        {
            case 1: //for Insertion
                cout<<"\nEnter number to be inserted: ";
                cin>>no;
                arr_Insert(arr,&size,no);
                break;

            case 2: //for Deletion
                cout<<"\nEnter number to be deleted: ";
                cin>>no;
                arr_delete(arr,&size,no);
                break;

            case 3: //for Linear Search
                cout<<"\nEnter number to be Searched: ";
                cin>>no;
                check_index(l_Search(arr,size,no));
                break;

            case 4: //for Binary Search
                cout<<"\nEnter number to be Searched: ";
                cin>>no;
                check_index(b_Search(arr,size,no));
                break;

            case 5: //for Terminating program
                cout<<"\nProgram is Exiting...";
                break;

            default: //for Invalid input
                cout<<"Error: Wrong Choice, Try Again!!";
                break;
        }
    }
    

}
