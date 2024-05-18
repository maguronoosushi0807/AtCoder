#include<iostream>
#include<string>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') ans++;
    }
    
    cout << ans;

    return 0;
}