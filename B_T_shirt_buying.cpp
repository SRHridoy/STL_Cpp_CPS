#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
const int mx = 2e5+123;
int a[mx];
int b[mx];
int p[mx];
int main(){
    optimize();

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> p[i];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];

    priority_queue<int,vector<int>,greater<int>>q[4][4];
    for(int i = 1; i <= n; i++){
        q[a[i]][b[i]].push(p[i]);
    }
    
    int m;
    cin >> m;


    while (m--)
    {
        int c;
        cin >> c;

        int ans = INT_MAX;
        int f,b;
        for(int i = 1; i <=3; i++){
            if(!q[c][i].empty() and q[c][i].top()<ans){
                ans = q[c][i].top();
                f = c, b = i;
            }
        }
        for(int i = 1; i <=3; i++){
            if(!q[i][c].empty() and q[i][c].top()<ans){
                ans = q[i][c].top();
                f = i, b = c;
            }
        }

        if(ans==INT_MAX){
            ans = -1;
        }else{
            q[f][b].pop();
        }
        cout << ans << " ";
    }
    

}
