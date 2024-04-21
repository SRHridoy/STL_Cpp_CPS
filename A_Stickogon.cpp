#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int,int>mp;
        for(int i = 0; i< n;i++){
            int a;
            cin >> a;
            mp[a]++;
        }
        int ans = 0;
        for(auto u:mp){
            ans+=u.second/3;
        }
        cout << ans <<endl;
    }
    
    
}
