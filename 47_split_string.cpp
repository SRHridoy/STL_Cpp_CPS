#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    string s = "Hello boys, I am doing cp!";
    vector<string>v;
    stringstream ss(s);
    string tmp;
    while(getline(ss,tmp,' ')) v.push_back(tmp);

    for(auto u:v)cout << u << endl;
    /*
    Hello
    boys,
    I
    am
    doing
    cp!
    */
}
