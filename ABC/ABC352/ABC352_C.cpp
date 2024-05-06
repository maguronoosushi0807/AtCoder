#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    unsigned long long int N;
    cin >> N;
    //vector<int> A(N+1, 0);
    //vector<int> B(N+1, 0);

    //rep(i,N) cin >> A[i] >> B[i];

    unsigned long long int A=0, B=0;
    unsigned long long int t=0, max_head=0;
    rep(i,N){
        cin >> A >> B;
        t += A;
        if(max_head < B-A) max_head = B-A;
    }

    cout << t+max_head ;

    return 0;
}