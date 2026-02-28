#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    cin >>t;

    while(t--)
    {
        int n,s;
        cin >>n>>s;

        vector<int>x(n);
        for (int i = 0; i < n; i++)
        {
            cin >>x[i];
        }
        
        if (n==1) 
        {
            cout << abs(s - x[0]) << endl;
        } 
        else 
        {
            int minDig = x[0], maxDig = x[n-1];
            if (s < minDig) 
            {
                cout << maxDig - s << endl;
            } 
            else if (s > maxDig) 
            {
                cout << s - minDig << endl;
            }
            else 
             {
                cout << maxDig - minDig + min(s - minDig, maxDig - s) << endl;
            }
        }
    }
    return 0;
}
