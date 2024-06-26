#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(unsigned long long int i=1;i<=n;i++)

int main(){
    unsigned long long int N,K; cin >> N >> K;
    vector<unsigned long long int>A(N+1,0); rep(i,N) cin >> A[i];

    unsigned long long int ans = 0;
    sort(A.begin(), A.end());

    rep(i,N-1){
        if(i>K) break;
        if(A[i]-A[i+1]>1) ans += (A[i+1]-A[i]-1)*(A[i]+A[i+1])/2;
    }

    cout << ans;

    return 0;
}