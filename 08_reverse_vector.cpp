#include"bits/stdc++.h"
using namespace std;

int main(){
    vector<int> v = {5, 3, 1, 4};

    reverse(v.begin(),v.end());
    for(auto u : v)
        cout << u << " ";
    cout << endl;
    //Output : 4 1 3 5
}
