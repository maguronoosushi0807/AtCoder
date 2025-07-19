#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector a(n, 0);
    for(auto &b:a) cin >> b;

    int x;
    cin >> x;

    bool ans = false;
    for(auto b:a){
        if(b == x) ans = true;
    }

    if(ans) cout << "Yes";
    else cout << "No";

    return 0;
}