#include<iostream>
using namespace std; 
 
 int getNextNumber(int n){
    int output = 0;

    while(n>0){
        int digit = n%10;
        output += digit*digit;
        n/=10;
    }
    return output;
}

bool isHappy(int n) {
    int slow=getNextNumber(n);
    int fast= getNextNumber(getNextNumber(n));

    while(slow!=fast){
        if(fast==1){
            return true;
        }
        slow= getNextNumber(slow);
        fast=getNextNumber(getNextNumber(fast));
    }

    return slow==1;
}
int main(){
    int n=19;
    cout<< isHappy(n)<<endl;

    return 0;
}