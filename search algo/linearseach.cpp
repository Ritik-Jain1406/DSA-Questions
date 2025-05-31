#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v = {3,342,3,23,2,3,3,4,54,6};
    // there will be a target whenever u use the linear search 
    int target = 6;
    for (int  i = 0; i < v.size(); i++)
    {
        if(v[i] == target) {
            cout<<"The target is found !!"<<endl;
        }
        else {
            cout<<"The target is not found !!"<<endl;
        }
    }
    

  return 0;
}