#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    vector<pair<int,int>>v;

    v.push_back({6,5});
    v.push_back({2,3});
    v.push_back({4,5});
    v.push_back({6,1});
    v.push_back({1,9});

    cout << "Sort in ascending order : " << endl;
    //Sort in ascending order : 
    sort(v.begin(),v.end());

    for(auto u:v)cout << u.first << " " << u.second << endl;

    cout << "Sort in descending order : " << endl;
    //Sort in descending order : 
    sort(v.rbegin(),v.rend());

    for(auto u:v)cout << u.first << " " << u.second << endl;

}
