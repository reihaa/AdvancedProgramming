#include <iostream>
using namespace std;

int main() {
    char a[10000],b[10000];
    cin>>a;
    int j=0;
    for(int i=0 ;a[i]!='\0';i++) {
        if ((int)'a' <= (int)a[i] && (int)'z' >= (int)a[i] || (int)'A' <= (int)a[i] && (int)'Z' >= (int)a[i]){
            b[j] = a[i];
            j++;
        }

    }

    cout<<b;
    return 0;
}
