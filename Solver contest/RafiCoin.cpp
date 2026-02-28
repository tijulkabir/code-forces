#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   int unique=0;
   cin >> n;
   int arr[n];
   int val[n];
   for (int i = 0; i<n ; i++)
   {
        val[i]=-1;
   }
   for (int i = 0; i<n ; i++)
   {
        cin >> arr[i];
   }
   
 for (int i = 0; i<n ; i++)
   {
        if(val[i]==-1)
        {
            unique++;

        }

        for (int j = i+1; j <n; j++)
        {
            if(arr[i]==arr[j])
            {
                val[j]=0;
                break;
            }
            break;

        }
        
   }


cout << unique << endl;
    return 0;
}