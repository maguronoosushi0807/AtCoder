#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int N, L, R;
    cin >> N >> L >> R;

    rep(i,N){
        if(L<=i && i<=R){
            cout << L+R-i <<" ";
        }else{
            cout << i << " ";
        }
    }

    return 0;
}