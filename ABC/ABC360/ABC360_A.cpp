#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    string S; cin >> S;

    if(S[0]=='R' || S=="SRM") cout << "Yes";
    else cout << "No";

    return 0;
}