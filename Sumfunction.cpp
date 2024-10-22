#include<iostream>
using namespace std;

int sum(int a,int b){
    int s=a+b;
    return s;
}

int main(){
    int n,m;
    cin>> n>> m;

    cout<< sum(m,n)<< endl;
    return 0;
}