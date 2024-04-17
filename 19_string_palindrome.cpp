#include"bits/stdc++.h"
using namespace std;

int main(){
    string s = "aabAa";
    string tmp = s;

    reverse(tmp.begin(),tmp.end());
    
    if(s == tmp) cout << "Palindrome\n";
    else cout << "Not Palindrome\n";

    //Not Palindrome
}
