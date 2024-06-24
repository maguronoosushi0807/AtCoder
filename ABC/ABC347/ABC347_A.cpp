#include<iostream>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int N,K; cin >> N >> K;

    rep(i,N){
        int A; cin >> A;
        if(A%K==0) cout << A/K << " ";
    }

    return 0;
}