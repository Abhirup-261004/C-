#include<iostream>
using namespace std;

int addDigits(int num){
    while(num>=10){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        num=sum;
    }
    return num;

}

int main(){
    int num=38;

    cout<< "Digits Sum="<< addDigits(num);

    return 0;
}