#include<iostream>
#include<string>
using namespace std;

int lengthOfLastWord(string str){
    int length=0;
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]==' ' && length>0){
            break;
        }
        if(str[i]!=' '){
            length++;
        }
    }
    return length;
}

int main(){
    string str="Abhirup Nandi";
    cout<<"Length of last word:"<<lengthOfLastWord(str)<<endl;
    return 0;
}