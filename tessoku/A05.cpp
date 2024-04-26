#include<iostream>

using namespace std;

int main(){
    int x=0;
    int n=0,k=0;
    cin>>n>>k;

    int c=0;
    for(int j=1;j<=n;j++){
        for(int i=1;i<=n;i++){
            c=k-i-j;
            if(1<=c&&c<=n) x++;
        }
    }

    std::cout<<x;
    return 0;
}