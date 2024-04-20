#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n;
    cin >> n;
    set<int>s;
    for(int i = 0; i< n; i++){
        int a;
        cin >> a;
        s.insert(a);
    }
    if(s.size()==1) cout << "NO" << endl;
    else cout << *(++s.begin()) << endl;
}
