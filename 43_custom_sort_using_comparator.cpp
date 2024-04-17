#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

bool cmp(pair<int,int>&p1,pair<int,int>&p2){
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return p1.second<p2.second;
    else return 0;
}

int main(){
    optimize();

    vector<pair<int,int>>v;
    v={{4,143},{3,120},{4,500},{1,20}};

    sort(v.begin(),v.end(),cmp);

    for(auto u:v) cout << u.first << " " << u.second << endl;
    /*
    4 143
    4 500
    3 120
    1 20
    */
}
