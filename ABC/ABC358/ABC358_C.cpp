#include<algorithm>
#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    // vector<vector<bool>> S(N+1,vector<bool>(M+1,false));
    // rep(i,N){
    //     string buf;
    //     cin >> buf;
    //     rep(j,M){
    //         if(buf[j]=="o") S[i][j] = true;
    //         else S[i][j]=false;
    //     }
    // }

    vector<string>S(N+1);
    rep(i,N){
        cin >> S[i];
    }
    
    sort(S.begin(),S.end());
    vector<bool> have(M+1,false);
    vector<bool> buf(M+1,false);
    int ans=0;
    bool flag=false;
    while(flag){
        int most_index=0;
        int most_num=0;
        rep(i,N)


        rep(i,M){
            if(!have[i]) break;
            else flag=true;
        }
    }

    return 0;
}