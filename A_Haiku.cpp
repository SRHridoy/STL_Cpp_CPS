#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
bool isVowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int main(){
    optimize();

    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);

    //cout << s1 << endl << s2 << endl << s3 << endl;
    int cnt1 = 0,cnt2 = 0,cnt3 = 0;
    for(auto u:s1){
        if(isVowel(u)){
            cnt1++;
        }
    }
    for(auto u:s2){
        if(isVowel(u)){
            cnt2++;
        }
    }
    for(auto u:s3){
        if(isVowel(u)){
            cnt3++;
        }
    }

    if(cnt1==5 and cnt2 == 7 and cnt3 == 5) cout << "YES" << endl;
    else cout << "NO" << endl;
}
