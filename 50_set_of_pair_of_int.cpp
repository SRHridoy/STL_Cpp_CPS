#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    set<pair<int,int>>s;

    s.insert({2,3});
    s.insert({4,1});
    s.insert({4,1});
    s.insert({2,1});
    s.insert({4,3});
    s.insert({5,1});
    s.insert({5,1});
    s.insert({5,4});

    cout << s.size() << endl;
    for(auto u:s)cout << u.first << " " << u.second << endl;

    /*
        6
        2 1
        2 3
        4 1
        4 3
        5 1
        5 4
    */
}
