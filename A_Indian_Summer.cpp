#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n;
    cin >> n;
    vector<pair<string,string>>vpss(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vpss[i].first >> vpss[i].second;
    }

    sort(vpss.begin(),vpss.end());
    int noOfUnique = unique(vpss.begin(),vpss.end())-vpss.begin();
    
    cout << noOfUnique << endl; 
}
