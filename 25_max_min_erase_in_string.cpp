#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    string s = "deacbAAA";

    cout << *max_element(s.begin(),s.end()) << endl;//e
    cout << *min_element(s.begin(),s.end()) << endl;//A

    s.erase(s.begin());//O(n)
    cout << s << endl;//eacbAAA

    //Erase from back : 
    s.erase(s.end()-1);//O(1)
    cout << s << endl;//eacbAA
}
