#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include<algorithm>
#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N+1,0);
    vector<int> C(N+1,0);
    vector<int> ans(N+1,-1);
    int num=N;

    rep(i,N){
        cin >> A[i] >> C[i];
        ans[i]=i;
    }

    rep(i,N){
        rep(j,N){
            if(A[j]<A[i] && C[i]<C[j]){
                C[j]=-1;
                ans[j]=-1;
                num--;
                break;
            }
        }
    }

    cout << num << endl;
    rep(i,N){
        if(ans[i]!=-1) cout << ans[i] << " ";
    }

    return 0;
}