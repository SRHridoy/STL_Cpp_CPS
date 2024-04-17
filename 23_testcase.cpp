#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        string s;
        
        //cin.ignore();
        char c;
        cin >> c;
        getline(cin,s);
        s+=c;
        cout << "Case " << i << " " << s << endl;
    }
}
