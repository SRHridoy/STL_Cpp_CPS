#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void genSubStr(string s, int n){
    for(int i = 0;i < n; i++){
        for(int j = 1; j <= n-i; j++){
            cout << s.substr(i,j) << endl;
        }

    }

    /*
        Hridoy
        H
        Hr
        Hri
        Hrid
        Hrido
        Hridoy
        r
        ri
        rid
        rido
        ridoy
        i
        id
        ido
        idoy
        d
        do
        doy
        o
        oy
        y
    */
}

int main(){
    optimize();

    string s;
    cin >> s;
    genSubStr(s,s.size());
}
