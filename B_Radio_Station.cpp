#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n,m;
    cin >> n >> m;
    vector<pair<string, string>> v1(n), v2(m);
    
    for (int i = 0; i < n; i++) {
        cin >> v1[i].first >> v1[i].second;
        v1[i]+=';';
    }

    for (int i = 0; i < m; i++) {
        cin >> v2[i].first >> v2[i].second;
    }

    for(int i = 0; i<m;i++){
        for(int j = 0; j < n; j++){
            if(v2[i].second==v1[j].second) {
                cout << v2[i].first << " " << v2[i].second << " #"<<v1[j].first<< endl;
                break;
            }
        }
    }
}
