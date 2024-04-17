#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool haveNextGreaterPermutaion = next_permutation(s.begin(),s.end());
        if(haveNextGreaterPermutaion)
            cout << s << endl;
        else    
            cout << "no answer" << endl;
    }
    
}
