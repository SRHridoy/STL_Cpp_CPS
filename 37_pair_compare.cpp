#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    pair<int,int> p1,p2;

    p1 = {3,5};
    p2 = {1,6};

    if(p1<p2) cout << "YES\n";
    else cout << "NO\n";

    //Findig minimum pair:
    pair<int,int> p = min(p1,p2);
    cout << p.first << " " << p.second << endl;

}
