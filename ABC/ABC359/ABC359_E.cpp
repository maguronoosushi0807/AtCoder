#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int>H(N+1,0);
    rep(i,N) cin >> H[i];
    string str{};
    
    rep(i,N){
        unsigned long long int ans=0;

        int h=0;
        // cout << "debug "<<i<<":";
        for(int j=i;j>=1;j--){
            // 左の壁のほうが高い  ansに低い方 hに高い方
            // 右のほうが高い 同じ ansにh
            if(j==i) h=H[j];

            // cout << "<" << H[j-1] << ", " << h << ">";

            if(H[j-1] > h){
                // ans+=H[j];
                ans+=h;
                h=H[j-1];
                // cout << H[j] << "_ ";
                // cout << h << "_ ";
            }else{
                ans += h;
                // cout << h << " ";
            }
            // cout << ans << " ";
        }
        // cout << endl;

        // ans++;
        // cout << ans+1 << " ";
        str += ans+1 + " ";
    }
    cout << str;

    return 0;
}