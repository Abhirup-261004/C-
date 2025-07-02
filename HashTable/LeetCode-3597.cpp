#include<iostream>
#include<vector>
#include<unordered_set>
#include<string>
using namespace std;

vector<string> partitionString(string s) {
    int n=s.size();
    vector<string>result;
    unordered_set<string>seen;
    int i=0;
    
    while(i<n){
        bool found=false;
        string curr;
        for(int j=i;j<n;j++){
            curr.push_back(s[j]);
            if(seen.count(curr)==0){
                //If current substring has not been seen
                found=true;
                result.push_back(curr);
                seen.insert(curr);
                i=j+1;
                break;//break as soon as a unique substring is found
            }
        }
        if(!found){
            break;//No more unique substrings can be formed
        }
    }
    return result;
}

int main(){
    string s="abbccccd";
    vector<string>result;
    result=partitionString(s);
    for(string el:result){
        cout<<"'"<<el<<"' ";
    }
    cout<<endl;
    return 0;
}