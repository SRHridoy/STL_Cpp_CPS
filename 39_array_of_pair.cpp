#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    pair<int,int>ap[] = {{6,5},{2,3},{4,5},{6,1},{1,9}};
    
    sort(ap,ap+5);
    
    for(auto u:ap) cout << u.first << " " << u.second << endl;
}
