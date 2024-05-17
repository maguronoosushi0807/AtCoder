#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N;
    cin>>N;

    vector<char> C(N+1, 0);
    vector<char> P(N+1, 0);
    rep(i, N) cin >> C[i] >> P[i];

    int Q;
    cin >> Q;
    vector<int> L(Q+1);
    vector<int> R(Q+1);
    rep(i, Q) cin >> L >> R;
    
    for(int j=0; i<Q;i++){
        int L=L[i+1];
        int R=R[i+1];
        int ans_a=0, ans_b=0;

        for(int i=L; i<=(R-L); i++){
            if(C[i]==1)
                ans_a += P[i];
            else
                ans_b += P[i];
        }
    }

    cout << ans_a << ' ' << ans_b ;

    return 0;
}