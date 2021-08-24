#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    getline(cin,a);
    for (int i = a.size() ;i>=0 ;i--){
        if(a[i]<='9' && a[i]>='0')
            cout<<a[i];
    }
    return 0;
}
