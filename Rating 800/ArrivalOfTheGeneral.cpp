#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int height[n];
    for (int i = 0; i <n; i++)
    {
        cin >>height[i];
    }
    int maxh=0,maxi=0,minh=101,mini=n-1;
    for (int i = 0; i <n; i++)
    {
        if(height[i]>maxh){
            maxh=height[i];
            maxi=i;
        }
        if(height[i]<=minh){
            minh=height[i];
            mini=i;
        }
    }
    if(mini>maxi){
        cout <<maxi+(n-1-mini)<<endl;
    }
    else{
        cout <<maxi+(n-1-mini)-1<<endl;
    }
    return 0;
    
}