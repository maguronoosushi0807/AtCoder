#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<unsigned long long int>H(N+1,0);
    rep(i,N) cin >> H[i];
    
    int ans=0;
    int h=H[0];
    rep(i,N){
        if(h < H[i]){
            h=H[i];
            ans+=H[i];
            ans++;
        }else{
        }

        cout << ans << " ";
    }

    return 0;
}