// THIS ALGO IS ONLY EFFICIENT FOR THE SORTED ARRAYS 

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {2,3,4,5,6,7};
    int start = 0 , end = v.size()-1;
    int target = 3 ; // assuming this target 
    bool found = false;
    while(start <= end)
    {
        int mid = start + (end - start)/2 ; 
        
        if(target == v[mid])
        {
            cout<<"The target is found at index " << mid << endl;
            found = true ;
            break;
        }
        else if (target > v[mid])
        {
            start = mid + 1; 
        }
        else {
            end = mid - 1;
        }
    }
    if(!found)
    {
        cout<<"The target is not found "<<endl; 
    }
  return 0;
}