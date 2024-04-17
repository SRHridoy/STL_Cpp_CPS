#include"bits/stdc++.h"
using namespace std;

int main(){
    string name = "Muhammad Sohanur Rahman";
    string::iterator it;
    for(it = name.begin(); it != name.end(); it++){
        cout << *it << " ";
    }cout << endl;
    //M u h a m m a d   S o h a n u r   R a h m a n 

    //এটা ইউজ করব ঃ 
    for(auto u:name){
        cout << u;
    }cout << endl;
    //Muhammad Sohanur Rahman
}
