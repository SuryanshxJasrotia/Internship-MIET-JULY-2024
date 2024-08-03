#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Count of 3 Multiples 
Write a program to find the count of 3 multiples in a given input integer array. 
Include a function named divisibleBy3 that accepts 2 arguments and returns an int. 
The first argument is the input array and the second argument is an int that corresponds to the size of 
the array. The function returns an int that corresponds to the count of 3 multiples. */
int divisibleBy3(int a[], int b){
    int count=0;
    for(int i=0;i<b;i++){
        if(a[i]%3==0){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Coutn of 3 multiples in the array: ";
   cout<< divisibleBy3(arr,n);

    return 0;
}