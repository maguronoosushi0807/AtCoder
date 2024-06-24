#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int N, M;
    cin >> N >> M;
    int ans=0;
    rep(i,N){
        int H;
        cin >> H;
        M-=H;
        if(M>=0) ans++;
    }

    cout << ans;
    return 0;
}