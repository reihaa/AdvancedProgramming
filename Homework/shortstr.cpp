//
// Created by rey on 6/15/18.
//


#include <iostream>
#include <string>

using namespace std;

void short_str (int n, string *temp);
int compare_str(string f,string temp);
string* find_pair(string temp[],int n);
string str_con(int ii,int jj,string temp[],int a);

int main(){
    int n;
    cin>>n;
    string* temp = new string[n];
    for (int i = 0; i<n; i++){
        cin>>temp[i];
    }

    short_str(n,temp);
}

void short_str(int n, string *temp){
    int m;
    if (n == 1){
        cout<<temp[0];
        return;
    }

    else{
        temp = find_pair(temp, n);
        short_str(n-1,temp);
        }
    }


string* find_pair(string* temp,int n){
    int max = 0;
    int a;
    int ii,jj;
    for(int i = 0; i< n; i++){
        for(int j = 0; j<n; j++){
            n = compare_str(temp[i],temp[j]);
            if (n>max){
                max = a;
                ii = i;
                jj = j;
            }
        }
    }
    string temp_str = str_con(ii, jj, temp, max);
    temp[ii] = temp_str;
    temp[jj] = temp[n-1];
    return temp;
}

int compare_str(string first,string sec){
    int f_len = first.length();
    int s_len = sec.length();
    int s;
    if (s_len>f_len)
        s = f_len;
    else
        s = s_len;
    for (int i = 0; i<s; i++){
        if (first[f_len-1] != sec[i])
            return i;
    }
}

string str_con(int ii,int jj,string temp[],int a){
    string str = temp[ii]+ temp[jj].substr(a-1,temp[jj].length()-1);
    return str;

}