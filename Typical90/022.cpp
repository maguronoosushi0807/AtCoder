#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    unsigned long long int A,B,C;
    cin >> A >> B >> C;
    unsigned long long int num1=A,num2=B,num3=C;
    
    if(num1<num2) swap(num1,num2);
    int mod = num1%num2;
    while(mod != 0){
        num1 = num2;
        num2 = mod;
        mod = num1%num2;
    }

    if(num2<num3) swap(num2,num3);
    mod=num2%num3;
    while(mod != 0){
        num2 = num3;
        num3 = mod;
        mod = num2%num3;
    }
    unsigned long long int common = num3;

    //cout << common << " ";
    cout << A/common + B/common + C/common  - 3;

    return 0;
}