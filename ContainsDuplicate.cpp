#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>&nums){
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i+1]){
            return true;
        }
    }
    return false;

}

int main(){
    vector<int>nums={1,2,3,1};
    cout<< containsDuplicate(nums);
    return 0;
}