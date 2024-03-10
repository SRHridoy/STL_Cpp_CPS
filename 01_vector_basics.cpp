#include<bits/stdc++.h>
using namespace std;

int main(){
    //User Vector Input : 
    int n;
    vector<int>v;

    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    //Manual Input :
    vector<int>v1 = {1, 2, 3, 4, 5};

    cout << v1.size() << endl;
    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    //Clearing Vector:
    v1.clear();
    
    //Checking empty or not :
    cout << v1.empty() << endl;

    v1 = {3,5};
    cout << v1.empty() << endl;

}