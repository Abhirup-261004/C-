#include<iostream>
using namespace std;

int digitSum(int n){
    int sum=0;
    int rem;
    while(n>0){
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    return sum;
}

int main(){
    int num;
    cout<< "Enter number whose digits sum you want:";
    cin>> num;
    cout <<"Sum of Digits="<< digitSum(num)<< endl;
    return 0;
}