#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// void shift_right(vector<int> arr){
//     for(int i=arr.size()-1;i>1;i--){
//         arr[i]=arr[i+1];
//     }
    
//}
void swaptofront(vector<int> &arrl){
    int temp=arrl[arrl.size()-1];
    for(int i=arrl.size()-1;i>0;i--){
        arrl[i]=arrl[i-1];
    }
    arrl[0]=temp;
}

void swaptofront2(vector<int> &arrl){
    int temp=arrl[arrl.size()-1];
    int temp2=arrl[arrl.size()-2];
    for(int i=arrl.size()-1;i>2;i--){
        arrl[i]=arrl[i-2];
        arrl[i-1]=arrl[i-3];
    }
    arrl[0]=temp2;
    arrl[1]=temp;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    reverse(arr.begin(),arr.end()) ; 
    reverse(arr.begin(),arr.end()) ; 
    // for(int i=0;i<arr.size();i++){
    // swaptofront2(arr);
    // for(auto i : arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;}
    // shift_right(arr);   
     for(auto i : arr){
        cout<<i<<" ";
    } 
    return 0;
}

// int main(){
//     vector<int> arrl;
//     int temp=arrl[0];
//     for(int i=arrl.size()-1;i>0;i--){
//         arrl[i]=arrl[i-1];
//     }
//     arrl[0]=temp;
// }
#include <vector>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;  // Handle cases where k > n

        // Reverse the entire array
        reverse(nums.begin(), nums.end());
        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        // Reverse the remaining n-k elements
        reverse(nums.begin() + k, nums.end());
    }
};
