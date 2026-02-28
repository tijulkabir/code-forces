#include<iostream>
using  namespace std;
int main()

{
    int t;
    char sopdo[11];
    cin >>t;
    if (t>=1 && t<=100)
    {
        for (int i = 0; i < t; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                cin >> sopdo;        
                cout << sopdo[0];  
                  
            }
            cout << endl;
    }
    cout << endl;
    
}
return 0;
}