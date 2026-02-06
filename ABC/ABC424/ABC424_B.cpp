#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> array(N, vector<int>(M, 0));

    for(int i=0;i<K;i++){
        int A, B;
        cin >> A >> B;

        array[A-1][B-1] = 1;
    }

    int answer = 0;
    rep(i, N){
        bool flag = true;
        rep(j, M){
            cout << array[i][j] << " ";
            if(array[i][j] == 0) flag = false;
        }
        if(flag) answer++;
        cout << endl;
    }

    cout << answer;

    return 0;
}