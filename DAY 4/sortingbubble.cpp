// sorting- arranging the data in sequential manner/asc/dec order

//bubble sort
//Given array [7,8,3,1,2]

#include<iostream>
#include<bits/stdc++.h>
#include <chrono>
using namespace std;
void swap(int& x, int& y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

void sort(int array[], int n){
    
     for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap if the current element is greater than the next element
                swap(array[j], array[j + 1]);
            }
        }
    

}
}

int main(){
    int length;
    cin>>length;
    int arr[length];
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    sort(arr,length);
    cout<<endl;
    for(int i=0;i<length;i++){
        cout<<arr[i];
    }
     auto start = std::chrono::high_resolution_clock::now();

    // Your code to be timed
    // ...

    // Stop the timer
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate the duration
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "Time taken: " << duration.count() << " microseconds\n";
    return 0;
}