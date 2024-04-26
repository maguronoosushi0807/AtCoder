#include<iostream>
#include<vector>

#define rep(i,n) for(int i=1; i<=(n); i++)
using namespace std;

int main(){
    int H,W;
    cin>>H>>W;

    vector<vector<int>> A(H+1,vector<int>(W+1,0));
    vector<int> line(H+1, 0);
    vector<int> row(W+1, 0);
    rep(y,H){
        rep(x,W){
            cin>>A[y][x];
            line[y] += A[y][x];
            row[x] += A[y][x];
        }
    }

    rep(y,H){
        rep(x,W) cout << line[y]+row[x]-A[y][x] << " ";
        cout << endl;
    }

    return 0;
}