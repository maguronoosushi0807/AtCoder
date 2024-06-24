#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int N;
    cin >> N;
    vector<int>A(N+1,0);
    rep(i,N) cin >> A[i];

    rep(i,N-1){
        cout << A[i]*A[i+1] << " ";
    }

    return 0;
}