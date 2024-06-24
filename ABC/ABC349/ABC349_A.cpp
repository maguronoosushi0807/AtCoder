#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int N;
    cin >> N;
    vector<int> A(N,0);
    rep(i,N-1) cin >> A[i];

    int ans=0;
    for(auto x:A) ans+=x;
    cout << -ans;

    return 0;
}