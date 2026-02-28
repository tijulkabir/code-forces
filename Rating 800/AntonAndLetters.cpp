#include<bits/stdc++.h>
using namespace std;
int main(){
    string chr;
    getline(cin,chr);

    set<char>distinct;
    
    for (char ch:chr)
    {
        if(ch == '{' || ch == '}' || ch == ',' || ch == ' ')
        continue;
        distinct.insert(ch);
    }
  
    cout << distinct.size()<<endl;
    return 0;
    
}