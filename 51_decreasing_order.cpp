#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    set<int,greater<int>>s;
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(5);
    s.insert(8);

    cout << s.size() << endl;
    for(auto u:s) cout << u << " ";
    cout << endl;

    //5
    //8 5 3 2 1 


    set<string,greater<string>>ss;
    ss.insert("Sohanur");
    ss.insert("Nova");
    ss.insert("Hridoy");
    ss.insert("Hridoy");
    ss.insert("Rupa");
    ss.insert("Tanha");

    for(auto u:ss) cout << u << endl;
    /*
    Tanha
    Sohanur
    Rupa
    Nova
    Hridoy
    */
    
    set<pair<int,int>,greater<pair<int,int>>>spg;
    spg.insert({1,2});
    spg.insert({2,3});
    spg.insert({4,2});
    for(auto u : spg) cout << u.first << " " << u.second << endl;
    /*
    4 2
    2 3
    1 2
    */
}
