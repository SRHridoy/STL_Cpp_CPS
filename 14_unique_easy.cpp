#include"bits/stdc++.h"
using namespace std;

int main(){
    vector<int>v = {1,2,2,3,3,4,5,6,6,7,8,8,9};
    int cntUnique = unique(v.begin(),v.end())-v.begin();
    cout << "No. of unique elements is " << cntUnique << endl;
    for(int i = 0; i < cntUnique; i++){
        cout << v[i] << " ";
    }cout << endl;

    //Output : No. of unique elements is 9
                //1 2 3 4 5 6 7 8 9
}
