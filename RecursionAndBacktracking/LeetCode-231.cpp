#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n<=0){
        return false;
    }
    if(n==1){
        return true;
    }
    return (n%2==0 && isPowerOfTwo(n/2));
}

int main(){
    int n=64;
    cout<<isPowerOfTwo(n)<<endl;
    return 0;
}