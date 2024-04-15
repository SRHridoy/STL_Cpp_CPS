#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int>cardNumbers(n);
    for(int i = 0; i < n; i++){
        cin >> cardNumbers[i];
    }

    int Sereja = 0, Dima = 0;

    for (int i = 0; i < n; i++)
    {
        if(cardNumbers.back()>=*cardNumbers.begin()){
            if(i%2==0){
                Sereja+=cardNumbers.back();
                cardNumbers.pop_back();
            }else{
                Dima+=cardNumbers.back();
                cardNumbers.pop_back();
            }
            
        }else{
            if(i%2==0){
                Sereja+=*cardNumbers.begin();
                cardNumbers.erase(cardNumbers.begin());
            }
            else{
                Dima+=*cardNumbers.begin();
                cardNumbers.erase(cardNumbers.begin());
            }
            
        }
    }

    cout << Sereja << " " << Dima << endl;
    

}
