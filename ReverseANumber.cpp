#include<iostream>
using namespace std;

int reverse(int n){
    int rev=0;

    while(n!=0){
        int dig=n%10;

        rev=rev*10 +dig;

        n=n/10;


    }
    return rev;
}

int main(){
    int n;
    cout<< "Enter number"<< endl;

    cin>> n;

    cout<< "Reversed Number: "<< reverse(n)<< endl;

    return 0;
}