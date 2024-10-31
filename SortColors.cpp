#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>&nums){
    int mid=0,high=nums.size()-1,low=0;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++,low++;
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}

int main(){
    vector<int>nums={2,0,2,1,1,0};
    sortColors(nums);
    for(int val:nums){
        cout<< val<<" ";
    }
    return 0;
}