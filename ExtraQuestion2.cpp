#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>> n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial:"<< fact<< endl;
    return 0;
}