#include<iostream>
#include<string>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    string S; cin >> S;

    if(S[0]!='<' || S[S.size()-1]!='>') cout << "No";
    else{
        rep(i,S.size()-2){
            if(S[i]!='=') {cout << "No"; return 0;}
        }
        cout << "Yes";
    }

    return 0;
}