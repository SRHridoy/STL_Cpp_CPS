#include"bits/stdc++.h"
using namespace std;

int main(){
    vector<int> v = {2, 3, 4, 5};

    //O(1)
    cout << v.back() << endl;//5
    //Delete last element : 
    //O(1)
    v.pop_back();
    cout << v.back() << endl;//4
    //O(1)
    //First element : 
    cout << *v.begin() << endl;//2
    //Erase :যেকোনো পয়েন্টার দিলেই এরেজ করবে। 
    v.erase(v.begin());
    cout << *v.begin() <<endl;//3

    vector<int>v1 = {3, 4, 2, 1 ,6};
    v1.erase(v1.begin()+4);
    for(auto u:v1) cout << u << " ";
    cout << endl;
    //Output : 3 4 2 1 
}
