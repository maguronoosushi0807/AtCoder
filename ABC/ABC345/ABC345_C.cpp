#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int P(int n){
    if(n==1) return 1;
    return n*P(n-1);
}

int main(){
    string S; cin >> S;

    int num[26]{};
    for(auto&c:S) num[c-97]++;
    unsigned long long int ans = P(S.length());
    for(auto&x:num) if(x!=0) ans /= P(x);

    for(auto x:num) cout << x << " ";
    cout << endl << ans;


    return 0;
}