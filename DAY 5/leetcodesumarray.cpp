#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = nums[0]; // Overall maximum sum found so far
        int max_ending_here = nums[0]; // Maximum sum of subarrays ending at the current position

        for (size_t i = 1; i < nums.size(); ++i) {
            // Update max_ending_here by considering the current element
            max_ending_here = max(nums[i], max_ending_here + nums[i]);

            // Update max_so_far if needed
            max_so_far = max(max_so_far, max_ending_here);
        }

        return max_so_far;
    }
    int maxSubArray2(vector<int>& nums){
        int ans=INT_MIN;
        int sum=0;

        for(const int num :nums){
            sum=max(num,sum+num);
            ans=max(ans,sum);
        }
        return ans;
    }
};


//main function +test cases must be included before using