#include <iostream>
using namespace std;

int main(){
    int **a = 0;
    int r,c;
    cin>>r>>c;
    a = new int *[r];
    for (int i=0; i<r ;i++){
        a[i] = new int[c];
    }
    for (int i = 0;i<r; i++){
        for (int j = 0; j<c; j++){
            cin>>a[i][j];
        }
    }
    int **b = 0;
    int ro,cu;
    cin>>ro>>cu;
    b = new int *[ro];
    for (int i=0; i<ro ;i++){
        b[i] = new int[cu];
    }
    for (int i = 0;i<ro; i++){
        for (int j = 0; j<cu; j++){
            cin>>b[i][j];
        }
    }

    for(int z = 0;z<r;z++){
        for (int x =0; x<ro; x++){
            for (int v = 0; v<c; v++){
                for (int n = 0; n<cu; n++){
                    cout<<a[z][v]*b[x][n]<<" ";
                }
            }
            cout<<endl;
        }
    }

}