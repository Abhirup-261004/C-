#include<iostream>
using namespace std;

int sumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cout<< "Enter range for whuch sum is to be calculated:";
    cin>> n;

    cout<< "Sum="<<sumN(n);
    return 0;
}