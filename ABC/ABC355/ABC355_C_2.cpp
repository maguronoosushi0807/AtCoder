#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int N,T; cin >> N >> T;
    vector<vector<bool>>A(N,vector<bool>(N,false));

    rep(i,T){
        int a;
        cin >> a;
        A[a/N][a%N] = true;
        for()
    }

    return 0;
}