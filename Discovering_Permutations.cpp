#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int t;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        for(int i = 0; i < n; i++){
            s+='A'+i;
        }
        //cout << s <<endl;
        int cnt = 0;
        cout << "Case " <<cs++<<":"<< endl;
        do{
            cout << s << endl;
            cnt++;
        }while(next_permutation(s.begin(),s.end()) and cnt!=k);
    }
    
}
