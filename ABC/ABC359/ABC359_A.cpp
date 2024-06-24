#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string>S(N+1);
    rep(i,N) cin>>S[i];

    int ans=0;
    rep(i,N) if(S[i]=="Takahashi") ans++;
    cout << ans;

    return 0;
}