#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(5);
    st.push(2);
    cout << st.size() << endl;

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    //4
    //2 5 2 1 
}
