/*

Write a Program to read the element of the given two matrixes & to perform the matrix multiplication.

Coded by: Harish Kumar
Date: 3/10/2021

*/

#include<iostream>
using namespace std;

void read_matrix(int **arr, int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
}

int main(){
    int r1,r2, c1,c2;
    cout<<"Enter number row & column of first matrix: ";
    cin>>r1>>c1>>r2>>c2;
    int **arr1 = new int [r1][c1];
    cout<<"Enter Elements of first matrix: ";
    read_matrix(arr1,r1,c1);
        int **arr2 = new int [r2][c2];
    cout<<"Enter Elements of first matrix: ";
    read_matrix(arr1,r2,c2);

}