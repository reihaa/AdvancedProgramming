#include <iostream>
using namespace std;

bool prime(int a);
int main(){
    int a,b;
    cin>>a>>b;
    for (int i = a; i < b; i++){
        for (int j = 2; j<= i/2; j++){
            if (prime(j) && prime(i-j)) {
                cout << i << " ";
                break;
            }
        }
    }
    return 0;
}

bool prime(int a){
    if (a != 2 && a%2 == 0)
        return false;
    for (int i=3; i*i<= a; i=i+2){
        if (a%i == 0)
            return false;
    }
    return true;
}