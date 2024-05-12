#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int A,B,C,D,E,F;

bool can_pay(int yen){
    while(yen >= 500 && F>0){
        yen-=500;
        F--;
    }
    while(yen >= 100 && E>0){
        yen-=100;
        E--;
    }
    while(yen >= 50 && D>0){
        yen-=50;
        D--;
    }
    while(yen >= 10 && C>0){
        yen-=10;
        C--;
    }
    while(yen >= 5 && B>0){
        yen-=5;
        B--;
    }
    while(yen >= 1 && A>0){
        yen-=1;
        A--;
    }

    if(yen==0) return true;
    else       return false;
}

int main(){
    cin >> A >> B >> C >> D >> E >> F;
    int N;
    cin >> N;
    vector<int> X(N+1,0);
    rep(i,N) cin >> X[i];

    rep(i,N){
        if(!can_pay(X[i])){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}