#include<iostream>
using namespace std;

int main(){
    int n=4;

    //upper
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<< "*";
        }

        //spaces
        for(int k=4;k>i;k--){
            cout<< "  ";
        }

        for(int j=1;j<=i;j++){
            cout<< "*";
        }
        
        cout<< endl;
    }

    //bottom
    for(int i=4;i>=1;i--){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        //spaces
        for(int k=4;k>i;k--){
            cout<< "  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<< endl;


    }
    return 0;
}