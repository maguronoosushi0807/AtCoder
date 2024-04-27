#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<string> A(N+1);
    vector<string> B(N+1);

    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];

    rep(i, N){
        if ( A[i] != B[i]){
            for(int j=0; j<N; j++){
                if( A[i][j] != B[i][j] )
                    cout << i << " " << j+1;
            }
        }
    }

    return 0;
}