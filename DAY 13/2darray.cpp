// Two dimentional array in cpp
// 2D array
// Created on: 13-10-2021
// A two-dimensional array is an array of arrays. It is a collection of rows and columns. The elements of a two-dimensional array are stored in a tabular form, i.e., in rows and columns.
// Syntax:
// data_type array_name[row_size][column_size];
// Here, data_type is the type of elements in the array, array_name is the name of the array, row_size is the number of rows in the array, and column_size is the number of columns in the array.
// Example:
// int arr[3][3];
// In the above example, we have created a two-dimensional array arr with 3 rows and 3 columns.
// To access the elements of a two-dimensional array, we use the row index and column index.
// Example:
// arr[0][0] = 1;
// arr[0][1] = 2;
// arr[0][2] = 3;
// arr[1][0] = 4;
// arr[1][1] = 5;


// Program:

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
        };
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
