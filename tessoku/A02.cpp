#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N,X;
    cin >> N >> X;
    
    int A=0;
    rep(i,N){
        cin >> A;
        if(X==A){
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}