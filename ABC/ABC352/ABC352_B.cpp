#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    string S="",T="";
    cin >> S >> T;

    int count=0;
    for(int i=0; i<T.length(); i++){
        if(T[i] == S[count]){
            cout << i+1 << " ";
            count++;
        }
    }

    return 0;
}