#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    //Multi-set ---> unique thake nah ... but sorted thake....All operations log2(n)
    multiset<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(7);
    s.insert(9);
    s.insert(4);
    s.insert(3);

    cout << s.size() << endl;
    for(auto u:s) cout << u << " ";
    cout << endl;
    /*
    10
    1 1 1 2 3 3 4 4 7 9
    */
   //Occurance of 1 : 
   cout << s.count(1) << endl;//3
   //Erase : it deletes all occurances : log2(n)
   s.erase(1);
   for(auto u:s) cout << u << " ";
   cout << endl;
   //2 3 3 4 4 7 9

   //Erase only one occurace : log2(n)
   auto it = s.find(3);
   s.erase(it);
   for(auto u:s) cout << u << " ";
   cout << endl;
   //2 3 4 4 7 9
}
