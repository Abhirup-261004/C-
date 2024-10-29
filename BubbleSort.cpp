#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

vector<int > bubbleSort(vector<int>&nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
    return nums;
}

int main(){
    vector<int>nums={4,1,5,2,3};
    cout<< "After sorting:";
    nums=bubbleSort(nums);
    for(int val:nums){
        cout<< val<<" ";
    }
    return 0;
}