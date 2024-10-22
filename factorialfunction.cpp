#include<iostream>
using namespace std;

int factorialN(int n){
    int facto=1;
    for(int i=1;i<=n;i++){
        facto=facto*i;
    }
    return facto;
}

int main(){
    int n;
    cout<< "Enter n whose factorial yyoun want to calculate:";
    cin>> n;

    cout<< "Factorial="<< factorialN(n);
    return 0;
}
