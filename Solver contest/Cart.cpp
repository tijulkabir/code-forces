#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testnum,weight;
    cin>> testnum >> weight ;
    int arr[testnum],val[testnum],solve[testnum];
    for (int i = 0; i < testnum; i++)
    {
        cin>> arr[testnum] >> val[testnum];
    }
    for (int i = 0; i < testnum; i++)
    {
        int target=weight;
      
        for (int j = i+1; j < testnum; j++)
        {
             int sum=arr[i];
             sum+=arr[j];
             if(sum==target)
             {
                solve[i]=target;
             }

        }
        
    }
    
    
}