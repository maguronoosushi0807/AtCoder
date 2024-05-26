#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    if(A==B){
        cout << -1;
    }else{
        if(A+B==3) cout << "3";
        if(A+B==4) cout << "2";
        if(A+B==5) cout << "1";
    }

    return 0;
}