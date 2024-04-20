#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int t;
    cin >> t;
    int cn = 1;
    while(t--){
        int n,r;
        cin >> n >> r;
        vector<pair<int,int>>v(r);
        for(int i = 0; i < r; i++)cin>>v[i].first >> v[i].second;


        sort(v.begin(),v.end());
        int size = unique(v.begin(),v.end())-v.begin();

        if(r!=size) cout << "Scenario #" <<  cn++  << ": impossible" << endl;
        else cout << "Scenario #" <<  cn++ << ": possible" << endl;
    }
}
