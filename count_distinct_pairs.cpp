#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    vector<pair<int,int>>vp;
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n; j++){
            if(i!=j and v[i]-v[j]==k){
                vp.push_back({v[i],v[j]});
            }
        }
    }
    
    sort(vp.begin(),vp.end());
    int size = unique(vp.begin(),vp.end())-vp.begin();
    for(auto u:vp) cout << u.first << " " << u.second << endl;
    cout << size << endl;
}
