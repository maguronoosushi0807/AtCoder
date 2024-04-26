#include <algorithm>
#include <iostream>
#include <vector>

#define rep(i, n) for (int i = 1; i < n; i++)
using namespace std;

int main()
{
    int N, L, K;
    cin >> N >> L >> K;

    vector<int> A(N+1, 0);
    rep(i, N+1) cin >> A[i];

    //中央に近い切れ目を順に切る
    int ans=L;
    for(int i=0; i<K; i++){
        
        int a,b;
        
    }

    return 0;
}