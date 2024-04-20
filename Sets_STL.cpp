#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int t;
    cin >> t;
    set<int>s;
    while (t--)
    {
        int a,b;
        cin >> a >> b;
        if(a==1) s.insert(b);
        else if(a==2) s.erase(b);
        else{
            set<int>::iterator it = s.find(b);
            if(it!=s.end()) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    
}
