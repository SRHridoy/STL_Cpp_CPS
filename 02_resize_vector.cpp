#include"bits/stdc++.h"
using namespace std;

int main(){
    vector<int> v = {2, 3, 4, 5};

    v.resize(10);

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    //We use Shortcutly:
    vector<int>v1(10);
    v1[4] = 10;
    cout << v[4] << endl;

    //If we want to print all 5 other than 0:
    vector<int>v2(10,5);
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl ;
}
