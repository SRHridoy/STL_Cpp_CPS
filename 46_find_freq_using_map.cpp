#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    vector<int>v={1,1,2,1,2,2,3,3,4,4,5,1,3,2};
    map<int,int>mp;
    for(auto u:v) mp[u]++;

    for(auto u:mp){
        cout << u.first << " " << u.second << endl;
    }
    /*
    1 4
    2 4
    3 3
    4 2
    5 1
    */
}
