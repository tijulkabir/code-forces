#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    string rhost;
    string pile;

    cin >> name;
    cin >> rhost;
    cin >> pile;

    string conca=name+rhost;

    sort(pile.begin(),pile.end());
    sort(conca.begin(),conca.end());

    if(pile==conca){
        cout <<"YES" <<endl;
    }
    else
    cout <<"NO"<<endl;
    //cout << conca;
    

return 0;

}