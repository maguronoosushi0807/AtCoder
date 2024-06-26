#include<algorithm>
#include<iostream>
#include<stack>
#include<vector>

using namespace std;
#define rep(i,n) for(unsigned long long int i=1;i<=n;i++)

int main(){
    int N=0; cin >> N;
    vector<unsigned int>A(N+1,0); rep(i,N) cin >> A[i];
    stack<unsigned int>S;

    rep(i,N){
        int a=A[i];
        if(S.size()<=0){
            S.push(a);
            continue;
        }
        while(a==S.top()){
            a++;
            S.pop();
            if(S.size()<=0) break;
        }
        S.push(a);
    }

    cout << S.size();

    return 0;
}   