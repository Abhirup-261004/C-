#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseStr(string s, int k) {
    int n= s.size();
    for(int i=0;i<n;i+=2*k){
        if(i+k<=n){
            reverse(s.begin()+i,s.begin()+i+k);
        }else{
            reverse(s.begin()+i,s.end());
        }
    }
    return s;
}

int main(){
    string s="abcdefg";
    int k=2;
    cout<<reverseStr(s,k)<<endl;

    return 0;
}