#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N;
    cin >> N;
    
    rep(i,N){
      i%3==0 ? cout << "x" : cout << "o";
    }

    return 0;
}