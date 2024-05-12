#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> A(N+1, 0);
    rep(i,N) cin >> A[i];
    //飛ばす

    int ans=1;
    int ride=0;
    rep(i,N){
        if(ride+A[i] > K){
            ride = A[i];
            ans++;
        }else{
            ride += A[i];
        }
    }

    cout << ans;

    return 0;
}