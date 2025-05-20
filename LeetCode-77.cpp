#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&temp,int n, int k, int idx,vector<vector<int>>&ans){
    if(temp.size()==k){
        ans.push_back(temp);
        return;
    }
    for(int i=idx;i<=n;i++){
        temp.push_back(i);
        solve(temp,n,k,i+1,ans);
        temp.pop_back();//Backtracking
    }
}
vector<vector<int>> combine(int n, int k) {
    vector<int>temp;
    vector<vector<int>>ans;
    solve(temp,n,k,1,ans);
    return ans;
}

int main(){
    int n=4,k=2;
    vector<vector<int>>ans;
    ans =combine(n,k);

    for(vector<int> temp:ans){
        for(int a:temp){
            cout<<a<<" ";
        }
        cout<< endl;
    }
    return 0;
}