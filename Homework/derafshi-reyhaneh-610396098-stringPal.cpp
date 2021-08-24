#include <iostream>
#include <string>
using namespace std;

bool string_pal(string);
int main(){
    string a,b;
    int max = 0;
    cin>>a;
    for(int i=0;i<a.size()-1;i++){
        for (int j=i+1; j<=a.size();j++){
            if(string_pal(a.substr(i,j-i))&& j-i>max){
                max = j-i;
                b = a.substr(i,j-i);

            }

        }

    }
cout<<b;
    return 0;
}
bool string_pal(string a){
    bool b = true;
    for (int i = 0;i<a.size();i++){
        if (a[i] != a[a.size()-1-i])
            b = false;
    }
    return b;
}
