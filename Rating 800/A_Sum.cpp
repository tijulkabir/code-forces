#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCase;
    cin >>testCase;

    while (testCase--)
    {
        int a ,b,c;
        cin >>a>>b>>c;

        if(a+b==c || b+c==a ||a+c==b)cout <<"YES"<<endl;
        else cout << "NO"<<endl;
    }
    
    return 0;
}