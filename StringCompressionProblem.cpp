#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compress(vector<char>&chars){
    int idx=0,n=chars.size();
    for(int i=0;i<n;i++){
        char ch=chars[i];
        int count =0 ;

        while(i<n && chars[i]==ch){
            count++;
            i++;
        }
        if(count==1){
            chars[idx++]=ch;
        }else{
            chars[idx++]=ch;
            string str=to_string(count);
            for(char dig :str){
                chars[idx++]=dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}

int main(){
    vector<char>chars={'a','a','b','b','c','c','c'};
    cout<< compress(chars)<< endl;
    for(char val:chars){
        cout<< val<< " ";
    }
    cout<< endl;
    return 0;
}