#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter no of rows and columns of square:";
    cin>> n;
    for(int i=1;i<=n;i++){//outer
        for(int j=1;j<=n;j++){//inner
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}