#include<iostream>
using namespace std;

int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}

int recGCD(int a,int b){
    if(a==0){
        return b;
    }
    return recGCD(b%a,a);
}

int main(){
    int a=36,b=54;
    cout<< "GCD is: "<< gcd(a,b)<< endl;

    cout<< "GCD is: "<< recGCD(a,b)<< endl;

    return 0;
}