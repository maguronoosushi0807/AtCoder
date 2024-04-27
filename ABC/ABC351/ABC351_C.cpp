#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include<iostream>
#include<vector>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> A(N+1, 0);
    rep(i, N) cin >> A[i];

    bool flag = true;
    //int c=0;
    while(flag){
        //cout << c++ << endl;
        flag=false;
        rep(i, A.size()-2){
            //int a = A[i];
            //int b = A[i+1];
            if(A[i]==A[i+1]){
                //int a=A[i];
                A.erase(A.begin()+i);
                A[i]++;
                flag=true;
            }
            /*
            cout << "debug : ";
            for(const auto& x : A) cout << x;
            cout << "  " << a << b << endl;
            */
        }
    }

    cout << A.size()-1;

    return 0;
}