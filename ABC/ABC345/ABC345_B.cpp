#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    long long int N; cin >> N;
    
    if(N%10==0)   cout << N/10;
    else if(N>0)  cout << N/10 + 1;
    else          cout << N/10;

    return 0;
}