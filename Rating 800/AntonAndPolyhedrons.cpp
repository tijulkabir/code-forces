#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    string dekbc[n];
    int count =0;
    for(int i=0;i<n;i++)
    {
        cin >> dekbc[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(dekbc[i]=="Tetrahedron")
        {
            count+=4;
        }
        if(dekbc[i]=="Cube")
        {
            count+=6;
        }
        if(dekbc[i]=="Octahedron")
        {
            count+=8;
        }
        if(dekbc[i]=="Dodecahedron")
        {
            count+=12;
        }
        if(dekbc[i]=="Icosahedron")
        {
            count+=20;
        }

        
    }
    cout<< count << endl;
    
}