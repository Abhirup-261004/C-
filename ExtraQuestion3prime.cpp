#include <iostream>
using namespace std;

int checkPrime(int n){
    int count=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            count=1;
            break;
        }
    }
    return count;
}

int main(){
    int num;
    cout<< "Enter number to check for prime:";
    cin>> num;
    int count=checkPrime(num);
    if(count ==0){
        cout<<"Prime\n";
    }else{
        cout<<"Not-prime\n";
    }
    return 0;
}