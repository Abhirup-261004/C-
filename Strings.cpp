#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cout<< "Enter a string:";
    cin.getline(str,100,'.');//Stops taking input at '.'
    cout<< str<<endl;
    return 0;
}