#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    string S{};
    cin >> S;

    int upper = 0, lower = 0;
    for(auto& c : S) (isupper(c) ? upper : lower)++;

    if(upper > lower) transform(S.begin(), S.end(), S.begin(), ::toupper);
    else              transform(S.begin(), S.end(), S.begin(), ::tolower);

    cout << S;

    return 0;
}