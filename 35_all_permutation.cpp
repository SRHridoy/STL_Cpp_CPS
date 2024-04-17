#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    string s = "ABC";
    int cnt = 0;
    do
    {
        cout << s << endl;
        cnt++;
    } while (next_permutation(s.begin(),s.end()));
    cout << "No of Permutaion is " << cnt << endl;

/*ABC
ACB
BAC
BCA
CAB
CBA
No of Permutaion is 6*/
}
