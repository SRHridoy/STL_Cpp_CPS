#include"bits/stdc++.h"
using namespace std;

int main(){
    int a[] = {2, 3, 4, 5};
//Array without index is a pointer...
// here , a means a+0 means starting pointer...a+4 means end pointer...
    sort(a, a+4);
    //a+0 থেকে a+4 এর আগ পর্যন্ত শর্ট করবে।


    vector<int>v = {5, 3, 2, 1, 2};
    // sort(v.begin(),v.end());

    // for(auto u : v)
    //     cout << u << " ";
    // cout << endl;

    
    sort(v.begin(), v.begin()+4);

    for(auto u : v)
        cout << u << " ";
    cout << endl;
    //output : 1 2 3 5 2


    sort(v.begin(),v.end(),greater<int>());
    for(auto u : v)
        cout << u << " ";
    cout << endl;
    //Output : 5 3 2 2 1

    sort(v.begin(), v.end());

    sort(v.rbegin(),v.rend());
    for(auto u : v)
        cout << u << " ";
    cout << endl;
    //Output : 5 3 2 2 1

}
