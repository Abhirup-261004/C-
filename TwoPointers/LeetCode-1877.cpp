#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minPairSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());

    int minMaxSum=0;
    for(int i=0;i< nums.size()/2;i++){
        minMaxSum= max(minMaxSum, nums[i]+nums[nums.size()-1-i]);
    }
    return minMaxSum;
}

int main(){
    vector<int>nums={3,5,2,3};
    cout<<minPairSum(nums)<<endl;

    return 0;
}