#include <iostream>
using namespace std;

int sum(int, int);

int main() {
    long long int a,b,n;
    cin>>b>>a;
    n = sum(b,a);
    cout<<n;
    return 0;
}

int sum(int a , int b){
    int A,B,c;
    long long int s;
    A= a%10;
    B= b%10;
    if (a==0 && b==0)
        return 0;
    else {
        c = A + B;
        s= sum(a/10,b/10)*10 + c;
        return s;
    }
}
