#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int copy=n;
    int sumOfCubes=0;
    while(n!=0){
        int dig=n%10;
        sumOfCubes+=(dig*dig*dig);

        n=n/10;
    }
    return sumOfCubes==copy;
}

int main(){
    int n=371;

    if(isArmstrong(n)){
        cout<<"Is an Armstrong Number"<< endl;
    }else{
        cout<< "Not an armstrong Number"<< endl;
    }

    return 0;
}