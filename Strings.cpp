#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string str="Abhirup Nandi";

    //Loops on string
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    for(char ch:str){
        cout<< ch<< " ";
    }
    cout<< endl;
}