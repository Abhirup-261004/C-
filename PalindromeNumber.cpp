#include<iostream>
using namespace std;

int reverse(int n){
    int rev=0;
    while(n!=0){
        int dig=n%10;
        rev= rev *10 + dig ;

        n=n/10;

    }
    return rev;
}

bool isPalindrome(int n){
    if(n<0){
        return false;
    }

    int rev=reverse(n);

    return rev== n;
}

int main(){
    int n;
    cout<< "Enter a number"<< endl;
    cin>> n;

    cout<< "Is Palindrome?"<< endl;
    cout<< isPalindrome(n)<< endl;

    return 0;
}