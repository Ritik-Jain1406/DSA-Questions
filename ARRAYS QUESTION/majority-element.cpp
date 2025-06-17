// this questions is based on MOORE'S VOTING ALGO
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// Input: nums = [3,2,3]
// Output: 3

#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int freq = 0, ans = 0; // initializing freq and ans with 0
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i]; // agr freq 0 h to  ans me nums[i] ki value store kra dnge
        }
        if (ans == nums[i]) // agr same value h to freq bda denge nhi to freq -- kr denge
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums  = {3,2,3};
    cout<< majorityElement(nums) <<endl; // output == 3
    return 0;
}
// Complexitiy  Analysis
// time = O(n)
// space = O(1)