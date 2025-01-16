#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> permute(vector<int>&nums){
    vector<vector<int>>res;
    sort(nums.begin(),nums.end());
    do{
        res.push_back(nums);
    }while(next_permutation(nums.begin(),nums.end()));//To Create new permutations

    return res;
}

int main(){
    vector<int>nums={1,2,3};

    vector<vector<int>>result=permute(nums);

    for(auto p:result){
        for(auto s:p){
            cout<< s<<" ";
        }
        cout<< endl;
    }
    return 0;
}