#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int N,M; cin >> N >> M;

    vector<int>A(N+1,0); rep(i,N) cin >> A[i];
    vector<int>B(M+1,0); rep(i,M) cin >> B[i];
    vector<int>C(N+M+1,0);
    rep(i,N) C[i] = A[i];
    rep(i,M) C[N+i] = B[i];

    sort(A.begin(), A.end());
    sort(C.begin(), C.end());
    rep(i,N+M-1){
        rep(j,N-1){
            if(C[i]==A[j]&&C[i+1]==A[j+1]){
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No";
    return 0;
}

/*
#include<algorithm>
#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> A(N+1,0);
    vector<int> B(M+1,0);
    rep(i,N) cin >> A[i];
    rep(i,M) cin >> B[i];

    sort(A.begin(),A.end());

    for(int i=1;i<N+1;i++){
        if(A[i+1]-A[i]==1){
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}*/