#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
bool isVowel(char ch){
    return(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y');
}
int main(){
    optimize();

    string s;
    cin >> s;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    string sAns;
    for (int i = 0; i < s.size(); i++)
    {
        if(!isVowel(s[i])){
            sAns+='.';
            sAns+=s[i];
        }
      
    }
    
    cout << sAns <<endl;
    
}
