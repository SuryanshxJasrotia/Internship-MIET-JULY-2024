/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.



Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]


Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30*/

// ANSWER

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> main()
{
    vector<int> nums = {1,4,0,7,3,0,2};
    vector<int> ans;
    int count = 0;
    int answer = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            count++;
        }
        else
        {
            answer = answer * nums[i];
        }
    }
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] == 0)
        {
            count--;
            if (count > 0)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(answer);
            }
            count++;
        }
        else
        {
            if (count > 0)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(answer / nums[j]);
            }
        }
    }
    return ans;
}