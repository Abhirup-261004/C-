#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int closestSum =nums[0]+nums[1]+nums[2];
    for(int i=0;i<nums.size();i++){
        int left=i+1;
        int right=nums.size()-1;
        while(left<right){
            int currSum=nums[i]+nums[left]+nums[right];
            if(abs(currSum-target)<abs(closestSum-target)){
                closestSum=currSum;
            }
            if(currSum<target){
                left++;
            }else{
                right--;
            }
        }
    }
    return closestSum;
}
int main(){
    vector<int>nums={-1,2,1,-4};
    int target=1;

    cout<<"ClosestSum="<<threeSumClosest(nums,target);

    return 0;
}