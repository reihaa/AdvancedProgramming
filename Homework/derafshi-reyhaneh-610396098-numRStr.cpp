
#include<iostream>
using namespace std;

int main(){
  int a,p[100100];
  bool check=false;
  string s;
  cin >> s >> a;
  for(int i = 0 ; a>0 ; i++)
    if(check || a%10!=0){
      p[i]=a%10 ;
      a/=10 ;
      check =true;
    }
    else{
      a=a/10;
      i--;
  for(int i = 0 ; i < s.size() ; i ++)
    if(s[i]-'0'!=p[i]){
      cout << "NO";
      return 0;
    }
  cout << "YES" ;
  return 0;
}
