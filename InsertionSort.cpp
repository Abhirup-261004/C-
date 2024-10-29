#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

void insertionSort(vector<int>&nums){//O(n^2)
    int n=nums.size();
    for(int i=1;i<n;i++){
        int curr=nums[i];
        int prev=i-1;
        while(prev>=0 && nums[prev]>curr){
            nums[prev+1]=nums[prev];
            prev--;
        }
        nums[prev+1]=curr;
    }
    return;
}

int main(){
    vector<int>nums={4,1,5,2,3};
    insertionSort(nums);
    for(int val : nums){
        cout<< val << " ";
    }
    return 0;
}