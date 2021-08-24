#include <iostream>
#include <string>
using namespace std;


int main(){
    int a,sum; //a: the number that will be given by user  sum: the summation of a's factors
    cin>>a;
    sum = 0;
    for(int i=1;i*i <= a; i++){ //the loop moves from 1 to a and finds the factors of a
        if (a%i==0){
            sum+=i;
            sum+=a/i;
        }
    }
   sum = sum/2; // because the a has been counted 
   if (sum==a)
       cout<<"Yes";
    else
       cout<<"No";
    return 0;
}

