#include<iostream>
using namespace std;

int reverseInt(int n){
    int newNum=0;
    int rem;
    while(n>0){
        rem=n%10;
        newNum=(newNum*10)+rem;
        n=n/10;
    }
    return newNum;
}

int main(){
    int n;
    cout<< "Enter number whose reverse you want to find:";
    cin>> n;

    cout<< "Reverse="<< reverseInt(n)<< endl;
    return 0;
}