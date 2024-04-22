#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    //Big value comes first and simillar to multiset and O(log2(n)) operations and used in various imp places..
    priority_queue<int>q;

    q.push(1);
    q.push(2);
    q.push(5);
    q.push(1);
    q.push(3);

    cout << q.size() << endl;//5

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }//5 3 2 1 1 
}
