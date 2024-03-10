#include"bits/stdc++.h"
using namespace std;

int main(){
    vector<int>v = {2, 3, 4, 5};

    reverse(v.begin(), v.end());//5 4 3 2 

    while (!v.empty())
    {
        cout << v.back() << endl;
        v.pop_back();
    }
    
}
