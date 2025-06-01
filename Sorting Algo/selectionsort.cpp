// time complex - O(n^2)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v = {4,6,3,2,5};
    int n = v.size();
    for (int  i = 0; i < n -1; i++)
    {
        int SI  = i; // smallest index 
        for(int j = i+1; j<n; j++) // finding the min elemnt in the unsorted array 
        {
            if(v[j] < v[SI])
            {
                SI = j ;
            }
        }
        swap(v[i] , v[SI]);
    }
    
    for(int j : v)
    {
        cout<<j<<endl;
    }
  return 0;
}