#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    vector<string>v;
    v.push_back("Sohanur");
    v.push_back("Sohanur");
    v.push_back("Sohanur");
    v.push_back("Rupa");
    v.push_back("Rupa");
    v.push_back("Rupa");
    v.push_back("Tanha"); 
    v.push_back("Tanha"); 
    v.push_back("Tanha"); 

    //sort first:
    sort(v.begin(),v.end());
    //calculate no of unique strings:
    int size = unique(v.begin(),v.end())-v.begin();

    for(int i = 0; i < size; i++) cout << v[i] << endl; 

// Rupa
// Sohanur
// Tanha
}