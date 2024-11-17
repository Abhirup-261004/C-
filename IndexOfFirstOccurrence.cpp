#include<iostream>
#include<string>
using namespace std;

int strstr(string haystack , string needle){
    int m=haystack.length(),n=needle.length();
    for(int i=0;i<=m-n;i++){
        if(haystack.substr(i,n)==needle){
            return i;
        }
    }
    return -1;
}

int main(){
    string haystack="sadbutsad";
    string needle="sad";

    cout<< strstr(haystack,needle)<< endl;

    return 0;
}
