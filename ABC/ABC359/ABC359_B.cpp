#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int>A(N*2+1);
    rep(i,N*2) cin >> A[i];

    int ans=0;
    rep(i,N*2-2) if(A[i]==A[i+2]) ans++;
    cout << ans;

    return 0;
}