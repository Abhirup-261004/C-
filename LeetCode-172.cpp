#include<iostream>
using namespace std;

int trailingZeroes(int n) {
    int count=0;
    if(n>=5){
        while(n>0){
            count+= n/5;
            n/=5;
        }
    }
    return count;
}

int main(){
    int n=25;
    cout<< trailingZeroes(n)<<endl;
    return 0;
}