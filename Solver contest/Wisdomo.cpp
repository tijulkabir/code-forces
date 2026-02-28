#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string name;
    int age;
    string topname;
    int topage=0;
    for (int i = 0; i <n; i++)
    {
        cin >> name >>age;
        if(age>topage)
        {
            topage=age;
            topname=name;
        }
    }
    cout<<topname<<endl;
    
   return 0; 
}