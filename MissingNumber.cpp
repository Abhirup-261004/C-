#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

int missingNumber(vector<int>&nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(i!=nums[i]){
            return i;

        }
    }
    return nums.size();
}

int main(){
    vector<int>nums={0,3,4,1};
    cout<< "Missing Number:"<< missingNumber(nums);

    return 0;
}