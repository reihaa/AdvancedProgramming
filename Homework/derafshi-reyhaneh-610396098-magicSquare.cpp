#include <iostream>


using namespace std;
int main(){
    int n;
    cin>>n;
    /*int **matrix = new int* [n];
    for (int i = 0; i<n; i++)
        matrix[i] = new int[n];*/
    int matrix[1000][1000];
    if (n/2*2 != n) {
        int i = n/2, j = n-1;
        for (int m = 1;m<=n*n ;m++){
            matrix[i][j] = m;
            i = i-1;
            j = j+1;
            if(i == -1 && j == n)
                j = j-2,i++;
            if( j == n)
                j = 0;
            if (i == -1)
                i = n-1;
            if (matrix[i][j] != 0) {
                j = j - 2;
                i = i + 1;
            }
        }
        for(int i = 0;i<n; i++){
            for (int j = 0; j<n; j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else if(n== n/4*4) {
        int m =1;
        for (int i = 0;i < n; i = i+1){
            for(int j = 0;j < n; j++) {
                matrix[i][j] = m;
                m++;
            }

        }
        for (int i = 0; i< n; i++){
            for (int j = 0; j < n; j++){
                if((n/4<= i && i< n-n/4 && (n/4>j || j>=n-n/4)) ||(n/4<= j && j< n-n/4 && (n/4>i || i>=n-n/4)))
                    cout<<matrix[i][j]<<" ";
                else
                    cout<<matrix[n-1-i][n-1-j]<<" ";
            }
            cout<<endl;
        }

    }

    else {
        int r = 0;
        int y = 1,g = 1;
        for (int z = 1; z >= 0; z--) {
            for (int x = 1; x >= 0; x--) {
                if(z==1 && x==0)
                    g=0,y=0;
                if (z==0 && x==1)
                    g=1,y=0;
                if (z==0&& x==0)
                     y=1,g=0;

                int i = n / 4, j = n/2 - 1;
                for (int m = 1; m <= n  * n / 4; m++) {
                    matrix[n-1-(g * n  / 2 + j)][n-1-(y * n / 2 + i)] = m + r * n * n / 4;
                    i = i - 1;
                    j = j + 1;
                    if (i == -1 && j == n/2)
                        j = j - 2, i++;
                    if (j == n/2)
                        j = 0;
                    if (i == -1)
                        i = n/2 - 1;
                    if (matrix[n-1-(g * n  / 2 + j)][n-1-(y * n / 2 + i)] != 0) {
                        j = j - 2;
                        i = i + 1;
                    }
                }
                r++;
            }
        }
        int temp;
        for(int i = 0;i<n/2;i++){
            for(int j = 0; j<n/4; j++){
                temp = matrix[i+n/2][j];
                matrix[i+n/2][j] = matrix[i][j];
                matrix[i][j] = temp;
            }

        }
        for(int i = 0;i<n/2;i++){
            for(int j = 0; j<n/4-1; j++) {
                temp = matrix[i + n / 2][n-1-j];
                matrix[i + n / 2][n-1-j] = matrix[i][n-1-j];
                matrix[i][n-1-j] = temp;

            }
        }
        temp = matrix[n/4][0];

        matrix[n/4][0] = matrix[n/4 + n/2][0];
        matrix[n/4 + n/2][0]=temp;
        temp = matrix[n/4][n/4];

        matrix[n/4][n/4] = matrix[n/4 + n/2][n/4];
        matrix[n/4+n/2][n/4]=temp;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout<<matrix[i][j]<< " ";
            }
            cout<<endl;
        }
    }


    return 0;
}

