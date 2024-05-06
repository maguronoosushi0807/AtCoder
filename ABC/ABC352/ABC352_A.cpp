#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int N,X,Y,Z;
    cin >> N >> X >> Y >> Z;
    
    if (X>Y) swap(X,Y);
    if (X < Z && Z < Y) cout << "Yes" ;
    else cout << "No";

    return 0;
}