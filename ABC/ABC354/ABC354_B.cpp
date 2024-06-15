#include<algorithm>
#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

struct Data{
    string S;
    int C;

    bool operator<(const Data& another) const {
        return S < another.S;
    }
};

int main(){
    int N;
    cin >> N;
    vector<Data> user(N+1);
    rep(i,N) cin >> user[i].S >> user[i].C;

    sort(user.begin(),user.end());

    int T=0;
    rep(i,N) T+=user[i].C;

    cout << endl << endl << T << " " << T%N << endl;
    for(auto x : user) cout << x.S << " " << x.C << endl;

    cout << user[T%N+1].S;

    return 0;
}