#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int count = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '#'){
            cout << i+1;

            if(count%2 == 0){
                cout << ",";
            }else{
                cout << "\n";
            }

            count++;
        }
    }
    return 0;
}