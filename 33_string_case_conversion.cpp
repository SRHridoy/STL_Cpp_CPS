#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    string s = "Sohanur ";
    string t = "Optimistic wise innocent";
    copy(t.begin()+17,t.begin()+25,back_inserter(s));
    cout << s << endl;
}
