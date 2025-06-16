#include<iostream>
#include<vector>

using namespace std;

int maximumDifference(vector<int>& nums) {
    int maxDiff=-1;
    int minVal=nums[0];

    for(int i=1;i<nums.size();i++){
        if(nums[i]>minVal){
            maxDiff=max(maxDiff,nums[i]-minVal);
        }else{
            minVal=nums[i];
        }
    }
    return maxDiff;
}

int main(){
    vector<int>nums={7,1,5,4};
    cout<<"Maximum Difference="<<maximumDifference(nums)<<endl;

    return 0;
}