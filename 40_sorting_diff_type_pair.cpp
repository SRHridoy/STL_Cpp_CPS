#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    vector<pair<string,int>>v;

    v.push_back({"Hridoy",21});
    v.push_back({"Nova",6});
    v.push_back({"Rupa",95});
    v.push_back({"Hridoy",3});
    v.push_back({"Nova",6});

    sort(v.begin(),v.end());

    for(auto u:v) cout << u.first << " " << u.second << endl;
    /*
    Hridoy 3
    Hridoy 21
    Nova 6
    Nova 6
    Rupa 95
    */

}
