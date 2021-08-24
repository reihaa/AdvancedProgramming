
#include <iostream>
#include <string>

using namespace std;
bool str(string a, string b);

int main(){
    string a,b,m;
    m = b;
    cin>>a>>b;
    int ans = 0;
    int c = b.length();
    for (int i = 0;i <= (a.length()/c); i++){
        if (str(a,m)){
            ans = i;
        }
        m = m + b;
    }
    cout<<ans;
    return 0;

}
bool str(string a, string b){
    for (int i = 0; i<=(a.length()-b.length()); i++){
        if (b == a.substr(i,b.length())){
            return true;
        }}
    return false;
}
