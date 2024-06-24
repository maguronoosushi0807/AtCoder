#include<algorithm>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int N;
    cin >> N;
    vector<int>X(N+1,0);
    vector<int>Y(N+1,0);
    rep(i,N) cin >> X[i] >> Y[i];

    
    rep(i,N){
        // doubleじゃないと誤差の問題でWAになる
        double distance=0;
        int index=0;
        rep(j,N){
            double b = sqrt((X[i]-X[j])*(X[i]-X[j]) + (Y[i]-Y[j])*(Y[i]-Y[j]));
            if( b > distance){
                distance=b;
                index=j;
            }
        }
        cout << index << endl;
    }

    return 0;
}