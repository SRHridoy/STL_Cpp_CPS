#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    deque<int>dq;
    dq.push_front(2);
    dq.push_front(1);
    dq.push_front(5);
    dq.push_back(4);
    dq.push_back(8);
    dq.push_back(7);

    cout << dq.size() << endl;//6
    cout << dq.front() << " " << dq.back()  << endl;//5 7
    dq.pop_front();
    cout << dq.front() << " " << dq.back() << endl;//1 7
    dq.pop_back();
    cout << dq.front() << " " << dq.back() << endl;//1 8
}
