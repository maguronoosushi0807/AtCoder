#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int N; cin >> N;
    vector<int>A(N+1,0); rep(i,N) cin >> A[i];
    vector<pair<int,int>>ans;

    rep(i,N){
        if(i!=A[i]){
            pair<int,int>a;
            a.first=i;
            a.second=A[i];
            ans.push_back(a);
            swap(A[i],A[A[i]]);
        }
    }
    cout << ans.size() << endl;
    for(auto&p:ans) cout << p.first << " " << p.second << endl;

    /*
    int c=0;
    string str{};
    rep(i,N){
        int a;
        cin >> a;
        if(a!=i && a<=i) {
            c++;
            str += to_string(a)+" "+to_string(i)+"\n";
        }
    }

    cout << c << endl << str;

    rep(i,N){
        int a;
        cin >> a;
        A[a] = i;
    }

    int count=0;
    string str{};
    rep(i,N){
        if(i==A[i]) continue;
        count++;
        str += to_string(i) + " " + to_string(A[i]);
        str +="\n";
        swap(A[i],A[A[i]]);
    }
    cout << count << endl << str;
    */

    return 0;
}