#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    vector<int> A(9+1, 0);
    vector<int> B(9+1, 0);

    rep(i,9) cin >> A[i];
    rep(i,8) cin >> B[i];

    int a=0,b=0;
    rep(i,9) a += A[i];
    rep(i,8) b += B[i];

    cout << a - b + 1;

    return 0;
}