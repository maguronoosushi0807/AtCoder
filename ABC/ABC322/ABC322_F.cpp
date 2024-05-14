#include<iostream>
#include<string>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

struct Query{
    int c=0,L=0,R=0;
};

int main(){
    int N,Q;
    cin >> N >> Q;
    string str;
    cin >> str;

    vector<Query> query_list(N+1);
    rep(i,Q) cin >> query_list[i].c >> query_list[i].L >> query_list[i].R;

    auto S = new bool[N];
    for(int i=0;i<N;i++) S[i]=stoi(str.substr(i,1));

    rep(j,Q){
        Query& query = query_list[j];
        if(query.c == 1){
            for(int i=query.L-1;i<query.R;i++){
                S[i]=!S[i];
            }
        }else{
            int ans=0,l=0;
            for(int i=query.L-1;i<query.R;i++){
                if(S[i]){
                    l++;
                }else{
                    if(ans<l) ans=l;
                    l=0;
                }
            }
            if(ans<l) ans=l;
            cout << ans << endl;
        }
    }

    return 0;
}