#include <iostream>
#include <string>
using namespace std;

int main() {
    char a[10000];
    cin>>a;
    int i =0;
    int ans = 0;
    while(a[i]!= '\0'){
        switch(a[i]) {
            case 'a':
                ans += 1;
                i++;
                break;

            case 'b':
                ans += 2;
                i++;
                break;
            case 'j':
                ans += 3;
                i++;
                break;
            case 'd':
                ans += 4;
                i++;
                break;
            case 'h':
                ans += 5;
                i++;
                break;
            case 'v':
                ans += 6;
                i++;
                break;
            case 'z':
                ans += 7;
                i++;
                break;
            case 't':
                ans += 9;
                i++;
                break;
            case 'y':
                ans += 10;
                i++;
                break;
            case 'k':
                ans += 20;
                i++;
                break;
            case 'l':
                ans += 30;
                i++;
                break;
            case 'm':
                ans += 40;
                i++;
                break;
            case 'n':
                ans += 50;
                i++;
                break;
            case 'f':
                ans += 80;
                i++;
                break;
            case 'q':
                ans += 100;
                i++;
                break;
            case 'r':
                ans += 200;
                i++;
                break;
            case 'x':
                ans += 600;
                i++;
                break;
            case 's':
                if (a[i + 1] == 'h') {
                    ans += 300;
                    i = i + 2;
                } else
                    ans += 60;
                i++;
                break;
            case '\'':
                if (a[i + 1] == 'a') {
                    ans += 70;
                    i = i + 2;
                }
                break;
            default:
                i++;
        }
        }
    cout<<ans;
    return 0;
}

