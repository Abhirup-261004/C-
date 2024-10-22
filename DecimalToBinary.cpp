#include<iostream>
using namespace std;

int main(){
    int pow=1,ans=0;
    int num;
    int rem;
    cout<<"Enter number which you want to convert into binary:";
    cin>> num;
    while(num>0){
        rem=num%2;
        num=num/2;
        ans+=rem*pow;
        pow*=10;
    }
    cout<< "Binary form="<< ans;
    return 0;
     
}