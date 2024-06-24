#include<algorithm>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    string S; cin >> S;
    string T; cin >> T;
    transform(T.begin(), T.end(), T.begin(), ::tolower);

    auto a=S.find(T[0]), b=S.find(T[1]), c=S.find(T[2]);
    if(T[2]=='x'){
        // cout << a << " " << b << " " << c;
        if(a!=string::npos && b!=string::npos) cout << "Yes";
        else                                   cout << "No";
    }else{
        if(a!=string::npos && b!=string::npos && c!=string::npos) cout << "Yes";
        else                                                      cout << "No";
    }

    return 0;
}
/*
a<b && b<c && 
*/