#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>&digits){
    int n=digits.size();
    for(int i=n-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }
        digits[i]=0;
    }
    digits.insert(digits.begin(),1);
    return digits;

}

int main(){
    vector<int>digits={9,9,9};
    digits=plusOne(digits);
    for(int val:digits){
        cout<< val;
    }
    return 0;

}