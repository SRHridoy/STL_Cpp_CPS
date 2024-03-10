#include"bits/stdc++.h"
using namespace std;

int main(){
    vector<int>v={1, 1, 2, 2, 3, 3, 4, 5, 6, 6, 1, 10, 3, 2};
    vector<int>::iterator it;

    int count = 0;
    sort(v.begin(),v.end());

    it = unique(v.begin(),v.end());
    count = distance(v.begin(),it);

    cout << count << endl;
}
