#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>findWordsContaining(vector<string>&words,char x){
    vector<int>res;
    for(int i=0;i<words.size();i++){
        if(words[i].find(x) != string::npos){
            res.push_back(i);
        }
    }
    return res;
}

int main(){
    vector<string>words={"leet","code"};
    char x='e';

    vector<int>results;
    results=findWordsContaining(words,x);
    for(int result:results){
        cout<<result<<" ";
    }
    return 0;
}