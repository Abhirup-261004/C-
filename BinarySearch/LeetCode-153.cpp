#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int>& nums) {
    int low=0,high=nums.size()-1;
    int minVal=INT32_MAX;
    while(low<=high){
        int mid= low+(high-low)/2;
        if(nums[low]<=nums[mid]){
            minVal=min(minVal,nums[low]);
            low=mid+1;
        }else if(nums[mid]<=nums[high]){
            minVal=min(minVal,nums[mid]);
            high=mid-1;
        }
    }
    return minVal;
}

int main(){
    vector<int>nums={3,4,5,1,2};
    cout<< findMin(nums)<<endl;

    return 0;
}