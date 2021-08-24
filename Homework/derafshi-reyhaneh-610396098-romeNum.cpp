#include <iostream>
using namespace std;


int* array(int);

void rome(int*);
int A[4];
int main(){
    int a;
    cin>>a;
    rome(array(a));
    return 0;
}

int* array (int a){
    for (int i = 3;i>=0;i--){
        A[i]=a%10;
        a= a/10;
    }
    return A;
}
void rome (int*A){
    char yekan[11][5] = {"","I", "II" , "III" , "IV" , "V", "VI", "VII", "VIII", "IX"};
    char dahgan[11][5] = {"" , "X", "XX" , "XXX" , "XL", "L", "LX" , "LXX" , "LXXX" , "XC"};
    char sadgan[11][5] = {"", "C" , "CC" , "CCC" , "CD", "D", "DC", "DCC" , "DCCC", "CM" };
    for(int i = 0;i<A[0];i++)
        cout<<"M";
    cout<<sadgan[A[1]]<<dahgan[A[2]]<<yekan[A[3]];
}