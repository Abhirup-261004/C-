#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

vector<int> smallerNumberThanCurrent(vector<int>&nums){
    int n=nums.size();
    vector<int>smaller;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(nums[j]<nums[i] && j!=i){
                count++;
            }
        }
        smaller.push_back(count);
    }
    return smaller;
}

int main(){
    vector<int>nums={8,0,1,4,2};
    vector<int>smaller=smallerNumberThanCurrent(nums);

    for(int val:smaller){
        cout<< val<< " ";
    }
    return 0;
}