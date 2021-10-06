/*

Write a Program to read the element of the given two matrixes & to perform the matrix multiplication.

Coded by: Harish Kumar
Date: 3/10/2021

*/

#include <iostream>
using namespace std;

int main()
{
    //Variable declerations
    int r1, r2, c1, c2;

    //Asking user for oder of first matrix
    cout << "Enter number row & column of first matrix: ";
    cin >> r1 >> c1;

    //Array decleration with given order
    int arr1[r1][c1];

    //Inputing values in matrix 1
    cout << "Enter Elements of first matrix: \n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    //Asking user for oder second matrix
    cout << "Enter number row & column of second matrix: ";
    cin >> r2 >> c2;

    if (r1 != c2)
    {
        cout << "\nMultilpication of matrix not possible!!";
        return -1;
    }

    //Array decleration with given order
    int arr2[r2][c2];

    //Inputing values in matrix 2
    cout << "Enter Elements of second matrix: \n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    //Array decleration for resultant matrix
    int res[c1][r2];

    //Performing Matrix Multiplication
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int sum = 0;
            for (int k = 0; k < r2; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            res[i][j] = sum;
        }
    }

    //Printing out Final Output
    cout << "\nResultant matrix\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}