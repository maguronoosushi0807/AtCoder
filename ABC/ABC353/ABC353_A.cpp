#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> H(N+1, 0);
    rep(i,N) cin >> H[i];

    rep(i,N){
        if(H[1] < H[i]){
            cout << i;
            return 0;
        }
    }

    cout << "-1";
    return 0;
}