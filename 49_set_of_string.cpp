#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    set<string>s;
    s.insert("Sohanur");
    s.insert("Sultana");
    s.insert("Rafiq");
    s.insert("Rupa");
    s.insert("Nova");
    s.insert("Tanha");
    s.insert("Tasin");
    s.insert("Sohanur");
    s.insert("Sultana");
    s.insert("Rafiq");
    s.insert("Rupa");
    s.insert("Nova");
    s.insert("Tanha");
    s.insert("Tasin");

    cout << s.size() << endl;
    for(auto u : s) cout << u << endl;

    /*
            7
        Nova
        Rafiq
        Rupa
        Sohanur
        Sultana
        Tanha
        Tasin
    */
}
