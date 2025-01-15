#include<iostream>
#include<string>
using namespace std;

int  main(){
    int t;
    cin>> t;
    
    while(t--){
        int N;
        cin>> N;

        string S;
        cin>> S;

        string T="";
        for(int i=0;i<N;i++){
            if(S[i]=='0'){
                T+='1';
            }else{
                T+='0';
            }
        }
        cout<< T<< endl;

    }
    return 0;
}