#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n;
    cin >> n;
    vector<string>v(n);
    map<string,int>mp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(mp[v[i]]==0) cout << "OK" << endl;
        else cout << v[i] <<mp[v[i]] << endl;
        mp[v[i]]++;
    }
}
