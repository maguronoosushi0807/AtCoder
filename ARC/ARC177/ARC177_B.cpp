#include<iostream>
#include<vector>
#include<string>

#define rep(i, n) for(int i=1; i<=n; i++)
using namespace std;

int N;

int return_index(vector<int>& S, int val){
    int i=N;
    while(S[i]!=val){
        i--;
    }
    return i;
}

int main(){
    cin >> N;
    string str;
    cin >> str;
    vector<int> S(N+1,0);
    rep(i,N) S[i] = stoi(str.substr(i-1,1));

    /*
    int ans=0;
    int index=0;
    bool flag=true;
    while(!S.empty()){
        if(flag)
            index=return_index(S,1);
        else
            index=return_index(S,0);
        
        ans+=index;
        S.erase(S.end()-index,S.end());
    }

    cout << ans;
    */

    int ans=0;

    int ind=0;
    rep(i,N){
        if(S[N-i+1]==1){
            ind=N-i+1;
            break;
        }
    }

    string ans_str="";
    for(int i=ind;i>=0;i--){
        if(S[i]==1){
            //ans+=1;
            ans_str+="A";
        }else{
            //ans+=2;
            ans_str+="B";
        }
    }

    cout << ans_str.length() << endl << ans_str;
    return 0;
}