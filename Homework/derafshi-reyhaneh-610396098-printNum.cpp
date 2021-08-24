#include <iostream>
#include <string>
using namespace std;


int main(){
    int a[6],b; //b is the number given by the user, a is an array of b
    string ans,k;
    ans,k = "";// ans: the final string answer
    char c[30][30]={"ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "},
    v[30][30]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "},
    m[30][30]={"","tweny ","thirty ","fourty ","fifty ","sixty ","seventy ""eighty ","ninty "},
    n[30][30]={"","thousand "};
    cin>>b;
    for (int i=0;i<6;i++) { //makes an array of the given integer
        a[i] = b % 10;
        b = b / 10;
    }
    for (int i= 0;i<6;i=i+3){ //build the answer
        k = "";
        if (a[1+i]!=1) {
            k = v[a[0+i]];//yekan
            k = m[a[1+i]-1] + k;//dahgan
        }
        else
            k = c[a[0+i]];// from 10 to 19
        if (a[2+i] != 0){
            k = "hundred "+k;
            k = v[a[2+i]]+ k;
        }
        if (a[i] || a[i+1] || a[i+2])
            k = k+n[i/3]; //add thousand etc
        ans = k + ans;
    }
    cout<<ans;


    return 0;
}

