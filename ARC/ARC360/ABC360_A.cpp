#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int N; cin >> N;
    string S; cin >> S;

    int ans = 0;
    for(int i=0;i<=N-3;i++){
        // cout << i << "-" << i+3 << ":" << S.substr(i,3) << " ";
        cout << ans << " ";
        if(S.substr(i,3)=="ABA"){
            // ans = (ans+1)%1000000007;
            ans++;
        }else if(S.substr(i,3)=="BAB"){
            // ans = (ans+1)%1000000007;
            ans++;
        }
    }

    cout << ans;

    return 0;
}