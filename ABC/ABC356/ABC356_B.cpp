#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int N, M;
    cin >> N >> M;

    vector<int>A(M+1,0);
    rep(i,M) cin >> A[i];

    vector<int>X(M+1,0);
    vector<int>B(M+1,0);
    rep(i,N){
        rep(j,M) cin >> B[j];
        rep(j,M) X[j]+=B[j];
    }

    rep(i,M){
        if(X[i]<A[i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}