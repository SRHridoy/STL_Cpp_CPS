#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int calPoints(vector<string>& v) {
    int maxi = 0;
    stack<string>s;
    for(auto u:v){
        if(u=="C" and !s.empty()){
            s.pop();
        }else if (u=="D" and !s.empty()){
            int d = stoi(s.top());
            d*=2;
            string ds = to_string(d);
            s.push(ds);
        }else if(u=="+" and s.size()>1){
            int sum = 0;
            int a = stoi(s.top());
            sum+=a;
            s.pop();
            int b = (stoi(s.top()));
            sum+=b;
            s.pop();
            s.push(to_string(b));
            s.push(to_string(a));
            s.push(to_string(sum));
        }else{
            s.push(u);
        }
    }

    while(!s.empty()) {
        maxi+=stoi(s.top());
        s.pop();
    }
    return maxi;
}

int main(){
    optimize();

    vector<string>v = {"5","-2","4","C","D","9","+","+"};

    int ans = calPoints(v);
    cout << ans << endl;

}
