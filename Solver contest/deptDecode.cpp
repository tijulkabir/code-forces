#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   int sum=0;
   cin >> n;
   int num[n];   
   for (int i = 0; i <n; i++)
   {
     cin >>num[i];
     int dig=num[i];
     while(dig>0)
     {
        int nigga =dig%10;
        sum+=nigga;
        dig/=10;
     }
     if(10<=sum<=24)
     {
        cout << "EEE" << endl;
     }
     else if (25<=sum<=39)
     {
        cout << "ICE"<<endl;
     }
      else if (40<=sum<=54)
     {
        cout << "CSE"<<endl;
     }
     else{
        cout << "INVALID" << endl;
     }
     
   }

return 0;
 
   
   

}