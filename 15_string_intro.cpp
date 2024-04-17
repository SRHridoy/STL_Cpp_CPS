#include"bits/stdc++.h"
using namespace std;

int main(){
    string s;
    s = s + 'a';//a
    s = s + 'b';//ab
    s += 'c';//abc

    cout << s << endl;

    //Initialization : 
    string name = "Hridoy";
    name += ' ';
    name += 'C';
    cout << name << endl;

    //Size : 
    cout << name.size() << endl;

    //Accessing :
    cout << name[0] << " " << name[1]<< " " << name[2] << endl;

    name[0] = 'R';
    cout << name << endl;

    //Concatinating : 
    string f = "Sohanur",l = "Rahman";
    char m = ' ';

    string fullName = f+m+l;
    cout << fullName << endl;

    //in same string : 
    f+=m;
    f+=l;
    cout << f << endl;
}
