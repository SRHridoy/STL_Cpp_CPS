#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    map<int,int>mp;
    for(auto u:v) mp[u]++;

    int cnt = 0;
    for(auto u:mp){
        if(u.second>u.first){
            cnt+=(u.second-u.first);
        }else if(u.second<u.first){
            cnt+=u.second;
        }
    }
    cout << cnt << endl;
}
