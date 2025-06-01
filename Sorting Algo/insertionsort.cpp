// time complex - O(n^2)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v = {4,6,3,2,5};
    int n = v.size();
    for(int i = 1; i<n; i++)
    {
        int current = v[i];
        int prev = i-1;
        while(prev >= 0 && v[prev] > current)
        {
            v[prev + 1] = v[prev];
            prev--;
        }
        v[prev + 1 ]  = current; // placing the current element in the current position 
    }
    for(int j : v)
    {
        cout<<j<<endl;
    }
  return 0;
}