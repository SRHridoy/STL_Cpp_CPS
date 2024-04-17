#include"bits/stdc++.h"
using namespace std;

int main(){

    //Compare two string : 
    string s1 = "Muhammad", s2 = "muhammad";

    //O(N)
    if(s1==s2) cout << "Equal" << endl;
    else cout << "Not equal" << endl;

    //Reverse : O(N)
    string s = "Hridoy";
    reverse(s.begin(),s.end());
    cout << s << endl;
}
