// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.
// It is a classical two pointer approach question
// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49

#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int> &h)
{
    int i = 0;
    int j = h.size() - 1;
    int max_volume = 0;
    while (i < j)
    {
        int height = min(h[i], h[j]);  // we take the min height from the both pointers 
        int width = j - i;              // width can always be detetrmine by j - i
        int vol = height * width;      
        max_volume = max(max_volume, vol); // it will find the max value from the current and max volume
        if (h[i] < h[j])                   // Agar h[i] < h[j] hai, toh left pointer i aage badhate hain, kyunki agar hum j ko peeche le jaayenge toh width toh kam hogi hi, lekin height bhi min(h[i], h[j]) ki wajah se nahi badhegi.
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return max_volume;
}
int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height)<<endl; // output = 49
    return 0;
}
// Complexitiy Analysis
// Time - O(n)
// space - O(1)
