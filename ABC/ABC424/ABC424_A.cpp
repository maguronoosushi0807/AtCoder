#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a==b || b==c || c==a){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}