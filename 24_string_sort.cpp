#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    //String Sorting : 
    string s = "adcbaBACA";
    sort(s.begin(),s.end());
    cout << s << endl;//AABCaabcd

    //String Decending Sorting :
    sort(s.rbegin(),s.rend());
    cout << s << endl;//dcbaaCBAA

    //Unique string : 
    sort(s.begin(),s.end());
    int size = unique(s.begin(),s.end())-s.begin();
    cout << "No. of unique elemets is : " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << s[i];
    }cout << endl;

    //No. of unique elemets is : 7
    //ABCabcd
    
    



}
