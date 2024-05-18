#include<cmath>
#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    unsigned long long int H;
    cin >> H;
    int count=1;
    unsigned long long int L=1;
    while(L<=H){
        L+=pow(2,count);
        count++;
    }

    cout << count;

    return 0;
}