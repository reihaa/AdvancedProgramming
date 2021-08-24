#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    string m;
    int a;
    cin>>str>>a;
    m = str;
    for(int b=1;b<a; b++)
        m=m+str;
    cout<<m;


    return 0;
}
