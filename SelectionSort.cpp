#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>&nums){//O(n^2)
    int n=nums.size();
    for(int i=0;i<n;i++){
        int smallIndex=i;//Starting of unsorted part
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[smallIndex]){
                smallIndex=j;
            }

        }
        swap(nums[i],nums[smallIndex]);
        
    }
    return;
}

int main(){
    vector<int>nums={4,1,5,2,3};
    selectionSort(nums);
    for(int val:nums){
        cout<< val<<" ";
    }
    return 0;
}
