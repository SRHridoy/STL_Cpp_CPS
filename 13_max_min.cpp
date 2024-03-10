#include"bits/stdc++.h"
using namespace std;

int main(){
    vector<int>v = {9, 2, 3, 4, 1, 6};

    //Gives the maximum element's Index:
    cout << max_element(v.begin(), v.end()) - v.begin() << endl;//0
     //Gives the maximum element:
    cout << *max_element(v.begin(), v.end()) << endl;//9

    //Gives the minimum element's Index:
    cout << min_element(v.begin(), v.end()) - v.begin() << endl;//4
     //Gives the minimum element:
    cout << *min_element(v.begin(), v.end()) << endl;//1

}
