#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

const int mx = 2e5+123;
int a[mx];

int main(){
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        priority_queue<pair<int,int>>q;
        int n;
        cin >> n;
        q.push({n,-1});
        
        int opCnt = 1;
        while (!q.empty())
        {
            int l = -q.top().second;
            int len = q.top().first;
            q.pop();
            int r = l + len -1;
            int mid;
            if(len%2){
                mid = (l+r)/2;
            }else{
                mid = (l+r-1)/2;
            }
            a[mid] = opCnt;
            opCnt++;

            int l1,r1,l2,r2;
            l1 = l;
            r1 = mid-1;
            l2 = mid+1;
            r2 = r;

            if(l1<=r1)  q.push({r1-l1+1,-l1});
            if(l2<=r2)  q.push({r2-l2+1,-l2});

        }
        for(int i = 1; i <=n ; i++)cout << a[i]<< " ";
        cout << endl;
    }
    
}
