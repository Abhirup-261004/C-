#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>

using namespace std;

string reverseVowels(string s){
    vector<int>pos;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            pos.push_back(i);
        }
    }
    int i=0,j=pos.size()-1;
    while(i<j){
        swap(s[pos[i]],s[pos[j]]);
        i++,j--;
    }
    return s;
}

int main(){
    string s="IcecreAm";
    cout<< "Updated String:"<< reverseVowels(s)<< endl;

    return 0;
}