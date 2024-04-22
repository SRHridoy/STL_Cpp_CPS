#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    queue<int> q;

    q.push(1);
    q.push(3);
    q.push(2);
    q.push(12);
    q.push(5);

    cout << q.size() << endl;//5
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }cout << endl;
    //1 3 2 12 5 
}
