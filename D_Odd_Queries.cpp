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
        int n,q;
        cin >> n >> q;
        vector<int>v(n),temp(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        temp = v;
        for(int i = 0; i < q; i++){
            int l,r,k;
            cin >> l >> r >> k;
            for(int i = l-1; i < r; i++) temp[i] = k;
            int sum = 0;
            sum = accumulate(temp.begin(),temp.end(),0);
            if(sum%2==1)cout << "YES" << endl;
            else cout << "NO" << endl;
            temp = v;
        }

    }
    
}
