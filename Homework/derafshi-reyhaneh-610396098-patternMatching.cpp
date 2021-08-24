#include <iostream>
#include <string>

using namespace std;

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    bool a = true;
    for(int i = 0; i<= t.size()- s.size();i++){
        a = true;
        for (int j = 0 ;j<s.size(); j++){
            if(t[i+j] != s[j]){
                a = false;
                break;
            }
        }
        if (a){
            cout<<i;
            return 0;
        }
    }
    cout<<"no";
    return 0;
}