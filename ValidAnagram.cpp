#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

bool isAnagram(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return s==t;
}

int main(){
    string s="anagram";
    string t="nagaram";
    cout<< isAnagram(s,t)<< endl;

    return 0;
}