#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    string s1,s2;
    cin >> s1 >> s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);

    if(s1==s2) cout << 0 << endl;
    else if(s1>s2) cout << 1 << endl;
    else cout << -1 << endl;
}