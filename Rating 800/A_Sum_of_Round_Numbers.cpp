#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCase;
    cin >>testCase;

    while (testCase--)
    {
        int n;
        cin >>n;
    int count=0;
    int power=1;

    int temp=n;

    while (temp>0)
    {
        if(temp%10!=0)count++;
        temp/=10;
       
    }
    cout <<count <<endl;
    temp=n;power=1;
    while (n>0)
    {
        int dig=n%10;
        if(dig!=0)cout << dig*power<<" ";
        n/=10;
        power*=10;
    }
    
    
cout <<endl;
    }    
    return 0;
}