#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    //ইউনিক করে কিন্তূ সর্ট করে নাঃ
    unordered_set<int>s;
    s.insert(3);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    //insert,delete avg case e O(1) and worst case O(n)...
    for(auto u:s)cout << u << " ";
    cout << endl;
    //2 1 3
}
