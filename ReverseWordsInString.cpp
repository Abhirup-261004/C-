#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

string reverseString(string s){
    int n=s.length();
    string ans="";
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        string word="";

        while(i<n && s[i]!=' '){//Skipped when space occurs
            word+=s[i];
            i++;
        }

        reverse(word.begin(),word.end());

        if(word.length()>0){//Skipped when continuous spaces occur
            ans+=" "+ word;
        }
    }
    return ans.substr(1);
}

int main(){
    string s="the sky is blue";
    cout<< reverseString(s);

    return 0;
}