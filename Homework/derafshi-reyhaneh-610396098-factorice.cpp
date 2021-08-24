#include <iostream>
#include <string>
using namespace std;

bool prime(int);//prototype of prime function

bool factorice(int);// prototype of factorice function 

int main(){
    int a,b;// a:start of the period   b: the end of the period
    cin>>a>>b;
    for (int i=a;i<b;i++)  //i the numbers in the priod, the loop checks if they have the factorice condition
        if (factorice(i))
            cout<<i<<endl;
    return 0;
}

bool prime(int a){ //the fuction which detemine whether a numeber is prime or not
    for(int i=2; i*i<=a; i=i+1){
        if (a%i==0)
            return false;
    }
    return true;
}

bool factorice(int a){ //the function which decide whether a number can be written by the sum of two prime
    for (int i = 2;i<= a/2; i++)
        if (prime(i) && prime(a-i))
            return true;
    return false;

}
