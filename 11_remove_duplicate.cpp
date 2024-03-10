#include"bits/stdc++.h"
using namespace std;

int main(){
    vector<int>v = {2, 2, 1, 1, 3, 3, 4, 5, 6, 9, 1};

    //Firstly Sort:
    sort(v.begin(),v.end());

    vector<int>::iterator it;
    
    //Apply unique:
    it = unique(v.begin(),v.end());

    //Resize to remove the undefined terms:
    v.resize(distance(v.begin(),it));

    //Print:
    for(auto u:v) cout << u << " ";
    cout << endl;
    //Output : 1 2 3 4 5 6 9 

}
