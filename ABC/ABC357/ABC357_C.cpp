#include<cmath>
#include<iostream>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int N;
    cin >> N;
    setvbuf(stdout, 0, _IOLBF, 4096);

    rep(y,pow(3,N)){
        rep(x,pow(3,N)){
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}