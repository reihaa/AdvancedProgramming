#include <iostream>
#include <string>
using namespace std;



void sort_1(int n, int r, int **c);
void sort_2(int n, int r, int **c);

int main(){

    int a;
    cin>>a;
    int **c;
    c=new int* [a];
    for(int i=0;i<a;i++)
    {
        c[i]=new int[a];
    }
    for (int j=0;j<a;j++){
        for(int i=0;i<a;i++)
            cin>>c[j][i];
    }
    int w;
    cout<<"1.sort the column"<<endl<<"2.row based on coumn";
    cin>>w;
    int r;
    cout<<"which column?";
    cin>>r;
    if (w==1)
        sort_1(a, r, c);
    else
        sort_2(a, r, c);
    for (int i=0;i<a ;i++){
        for (int j=0; j<a;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
void sort_1(int n,int r, int **c){
    int i, j;
    int temp;
    for (i=1; i< n; i++){
        temp=c[i][r];
        j=i;
        while ( (j>0) && (c[j-1][r]>temp) ){
            c[j][r] = c[j-1][r];
            j= j-1;
        }
        c[j][r] = temp;
    }
    return;
}

void sort_2(int n,int r, int**c){
    int i, j;
    int temp;
    int * temp_;
    temp_ = new int[n];
    for (i = 1; i< n; i++){
        temp=c[i][r];
        for (int w = 0;w<n; w++)
            temp_[w] = c[i][w];
        j=i;
        while ( (j>0) && (c[j-1][r]>temp) ){
            for (int w = 0;w<n; w++)
                c[j][w] = c[j-1][w];
            j= j-1;
        }
        for (int w = 0;w<n; w++)
            c[j][w] = temp_[w];

    }
    return;
}
