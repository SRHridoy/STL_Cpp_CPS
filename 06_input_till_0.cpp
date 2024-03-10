#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;
    vector<int>v;

    while (cin>>n)
    {
        if(n==0) 
            break;
        v.push_back(n);
    }

    cout << v.size();
    for(auto u : v)
        cout << u << " ";
    cout << endl;

}