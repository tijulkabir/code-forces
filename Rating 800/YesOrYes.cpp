#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string yes;
    for (int i = 0; i <n; i++)
    {
        cin >> yes;
        transform(yes.begin(),yes.end(),yes.begin(),::tolower);

   if(yes=="yes")
   {
    cout << "YES" << endl;
   }

   else{
    cout << "NO" << endl;
   }

}
    return 0;
}