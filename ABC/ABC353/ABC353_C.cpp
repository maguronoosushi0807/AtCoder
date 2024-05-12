#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N+1,0);
    rep(i,N) cin >> A[i];

    unsigned int val=0;
    unsigned int ans=0;
    for(int i=1;i<=N-1;i++){
        for(int j=i+1;j<=N;j++){
            val = A[i]+A[j];
            if(val >= 100000000){
                ans += (A[i]+A[j])%100000000;
            }
            else{
                ans += val;
            }
            //cout << i << " " << j << endl;
        }
    }

    cout << ans;

    return 0;
}