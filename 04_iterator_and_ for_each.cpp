#include"bits/stdc++.h"
using namespace std;

int main(){
    vector<int>v = {2, 3, 4};
    
    //Iterator: 
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }cout << endl;
    //Output : 2 3 4

    //Egula Use korbo : Shortcut vabe for each-loop use korbo:
    for(int element : v){
        cout << element << " ";
        //element+=2; doesn't work...
    }cout << endl;
    //Output : 2 3 4

    //EKhane int na likhe auto likhbo : 
    for(auto u:v){
        cout << u << " ";
    }cout << endl;
    //Output : 2 3 4

}
