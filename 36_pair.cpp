#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    pair<int,int>pii;
    pii.first = 12;
    pii.second = 21;
    cout << pii.first << " " << pii.second << endl;

    pair<string,vector<int>>psv;

    psv.first = "Hridoy ";
    psv.second = {0,0,7};

    cout << psv.first;
    for(auto u:psv.second) cout << u ;
    cout << endl;

    /*
    12 21
    Hridoy007
    */

//Initializing:
   pair<int,int>p;
   p = make_pair(2,3);
   p = {5,5};
   p.first++;
   cout << p.first << " " << p.second << endl;//6 5
}
