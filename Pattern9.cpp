#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1;i<=n;i++){//outer
        for(int j=0;j<n-i;j++){// for spcae
            cout<< " ";

        }
        for(int k=1;k<=i;k++){
            cout<< k;
        }
        for(int m=i-1;m>=1;m--){
            cout<< m;
        }
        cout << endl;
    }
    return 0;
}
