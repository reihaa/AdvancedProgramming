#include <iostream>

using namespace std;

void rank(int,int,int);
void unrank(int, int, int);
bool check(int*, int*, int);

int main(){
    cout<<"enter the number of set elements";
    int n;
    cin>>n;
    cout<<"enter the number of subsets";
    int k;
    cin>>k;
    int e;
    cout<<"1.rank 2.unank?";
    cin>>e;
    if (e==1){
        int t;
        cin>>t;
        rank(n,k,t);
    }
    if (e==2){
        int c;
        cin>>c;
        unrank(n,k,c);
    }
    return 0;
}


void rank(int n,int k,int b){
    int c[k];
    for(int i = k-1;i>=0;i--){
        c[i] = b%10;
        b = b/10;
    }

    int a[k];

    for(int i = 0;i<k;i++ )
        a[i] = i+1;
    b = 0;
    int i = k-1;

    while(!check(a,c,k) && i>= 0){
        b++;
        while (i >= 0 && a[i]==n-k+i+1)
            i--;
        if (i>= 0) {
            a[i]++;
            for (int j = i + 1; j < k; j++)
                a[j] = a[j - 1] + 1;

            i = k - 1;
        }
    }
    if (check(a,c,k))
        cout<<b;
    else
        cout<<"not found";


}


void unrank(int n,int k,int c){
    int a[k];
    for(int i = 0;i<k;i++ )
        a[i] = i+1;
    int i = k-1;
    int b = 0;
    while (b != c &&i >= 0){
        b++;
        while (i >= 0 && a[i]==n-k+i+1)
            i--;
        if (i>= 0)
            a[i]++;
        for (int j = i+1;j<k;j++)
            a[j]=a[j-1]+1;
        i = k-1;
    }
    if (b==c){
        for (int i = 0; i<k;i++)
            cout<<a[i]<<" ";
    }
    else
        cout<<"not found";
}

bool check(int *a,int *c, int k){
    for (int i = 0;i<k; i++){
        if (a[i] != c[i]) {
            return false;

        }
    }
    return true;
}