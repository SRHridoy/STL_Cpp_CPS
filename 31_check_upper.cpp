#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    char c = 'A';
    bool f1 = isupper(c);
    cout << f1 << endl;//1
    char ch = 'a';
    bool f2 = islower(ch);
    cout << f2 << endl;//1
    //Checking space or not : 
    char cs = ' ';
    bool f3 = isspace(cs);
    cout << f3 << endl;//
}
