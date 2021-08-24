#include <iostream>
using namespace std;

int main() {
    long long int a;
    cin>> a;
    long long int b;
    b=1;
    while (a != b * b)
        b = a / ( b * 2) + b / 2;
    cout<< b;
    return 0;
}
