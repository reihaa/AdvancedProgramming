#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    string b;
    cin>>str;
    int i,j;
    cin>>i>>j;
    i--;
    j--;
    b = str.substr(i,j-i+1);
    for(int counter = i; counter <=j; counter++) {
        str[counter] = b[j-counter];
    }
    cout<<str;
    return 0;
}
