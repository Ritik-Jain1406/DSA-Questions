// Time Complexity - O(n^2)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v = {2,0,2,1,1,0};
    for(int i = 0; i<v.size(); i++)
    {
        for(int j = 0; j<v.size()-i-1; j++)
        {
            if (v[j] > v[j+1])
            {
                swap(v[j], v[j+1]);
            }
        }
    }
    for(int i : v)
    {
        cout<<i<<" ";
    }
  return 0;
}