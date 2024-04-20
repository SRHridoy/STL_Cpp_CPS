#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n;
    cin >> n;
    set<int>s;
    int p;
    cin >> p;
    for(int i = 0; i < p; i++){
        int a;
        cin >> a;
        s.insert(a);
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int a;
        cin >> a;
        s.insert(a);
    }

    if(n==s.size()) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
}
