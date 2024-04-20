#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    set<int> s = {1, 1, 3, 3, 2, 2};

    cout << s.size() << endl;
    for(auto u:s) cout << u << " ";
    cout << endl;

    //print using iterator : 
    set<int>::iterator it;
    for(it = s.begin();it!=s.end();it++) cout << *it << " ";
    cout << endl;
    //1
    //2
    //3

    //clear() : 
    s.clear();
    //empty();
    cout << s.empty() << endl;//1

    //taking data : 
    s.insert(22);//log2(n)
    s.insert(22);
    s.insert(3);
    s.insert(3);

    cout << s.size() << endl;
    for(auto u:s) cout << u << " ";
    cout << endl;
    //3
    //22

    // Present or not using count : log2(n)
    cout << s.count(2) << endl;//0
    cout << s.count(3) << endl;//1

    //first element : 
    cout << *s.begin() << endl;//3 

    //cout < *(s.begin()+1) << endl; impossible


    //Last element : 
    //cout << *(s.end()-1)<< endl; //impossible
    cout << *(--s.end()) << endl;//22 works...
    cout << *(s.rbegin()) << endl;//22


    //Erase any element : 
    s.erase(22);
    cout << s.size() << endl;//1
    for(auto u:s) cout << u << " ";//3
    cout << endl;

    s.insert(1);
    s.insert(4);
    s.insert(5);
    s.insert(8);

    //Erase 1st element:
    s.erase(s.begin());
    cout << s.size() << endl;
    for(auto u : s) cout << u << " ";
    cout << endl;
    //3 4 5 8

    //Erase Last element : 
    //s.erase(s.rbegin()); doesn't work
    s.erase(--s.end());
    for(auto u : s) cout << u << " ";
    cout << endl;
    //3 4 5


    
}
