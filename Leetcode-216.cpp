#include<iostream>
#include<vector>

using namespace std;

void combination(int idx,vector<vector<int>>&ans,vector<int>&temp,int k,int tar){
    if(tar==0 && temp.size()==k){
        ans.push_back(temp);
        return;
    }
    if(tar<0 || temp.size()>k){
        return;
    }
    for(int i=idx;i<=9;i++){
        temp.push_back(i);
        combination(i+1,ans,temp,k,tar-i);
        temp.pop_back();//Backtracking
    }
}
vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>>ans;
    vector<int>temp;
    combination(1,ans,temp,k,n);
    return ans;
}
int main(){
    int n=7,k=3;

    vector<vector<int>>ans;
    ans= combinationSum3(k,n);

    for(vector<int> temp:ans){
        for(int a:temp){
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}