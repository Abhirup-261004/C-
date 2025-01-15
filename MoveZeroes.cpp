#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int> &nums){
    int nonZero=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            nums[nonZero++]=nums[i];
        }

    }
    for(int i=nonZero;i<n;i++){
        nums[i]=0;
    }
}


int main(){
    vector<int>nums={0,1,0,3,12};
    moveZeroes(nums);
    for(int i=0;i<nums.size();i++){
        cout<< nums[i]<< " ";

    }
    return 0;
}