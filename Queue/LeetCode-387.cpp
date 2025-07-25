#include<iostream>
#include<string>
#include<queue>
#include<unordered_map>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char,int>m;
    queue<int>q;

    for(int i=0;i<s.size();i++){
        if(m.find(s[i])==m.end()){
            q.push(i);
        }
        m[s[i]]++;
        while(q.size()>0 && m[s[q.front()]]>1){
            q.pop();
        }
    }
    return q.empty()?-1:q.front();
}

int main(){
    string s="level";
    
    cout<<"First Unique Character :"<<s[firstUniqChar(s)]<<endl;

    return 0;
}