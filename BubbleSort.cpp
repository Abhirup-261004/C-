#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>&nums){//O(n^2)
    int n=nums.size();
    
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){//if alraedy sorted
            return;
        }
    }
    
}

int main(){
    vector<int>nums={4,1,5,2,3};
    cout<< "After sorting:";
    bubbleSort(nums);
    for(int val:nums){
        cout<< val<<" ";
    }
    return 0;
}