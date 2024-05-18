#include<iostream>
#include<string>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if((a*b)%2==0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}