#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int a = 123;
    string s = to_string(a);
    cout << s << endl;
    s[0]=2;//using this I got emojis...
    cout << s << endl;
    s[0]='2';
    cout << s << endl;
    //123
    //☻23
    //223
}
