#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cin>>str;

    int num=stoi(str.substr(3,3));
    if((1<=num&&num<=349)&&num!=316){
        cout<<"Yes";
        return 0;
    }
    cout<<"No";

    return 0;
}