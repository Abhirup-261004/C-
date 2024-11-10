#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

void reverseString(vector<char>&str){
    int st=0,end=str.size()-1;
    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }

}
int main(){
    vector<char>str={'h','e','l','l','o'};
    reverseString(str);
    for(auto ch:str){
        cout<< ch<<" ";
    }
    cout<< endl;
}