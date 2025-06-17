// This question basically based on kadane's algo
// Given an integer array nums, find the subarray with the largest sum, and return its sum.
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
  int currentsum = 0;
  int maxsum = INT_MIN; // worked as minus infinity
  for (int i = 0; i < nums.size(); i++)
  {
    currentsum += nums[i];
    maxsum = max(maxsum, currentsum); // finding the max sum
    if (currentsum < 0)  // condition if the sum is negative it will reset the value to zero
    { 
      currentsum = 0;
    }
  }
  return maxsum;
}
int main()
{
  vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
  cout<< maxSubArray(nums) << endl; // output == 6

  return 0;
}
// Complexitiy  Analysis
// time = O(n)
// space = O(1)