#include<iostream>
#include<vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>&nums){
    int ones=0,maxOnes=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            ones++;
            maxOnes=max(maxOnes,ones);

        }else{
            ones=0;
        }
    }
    return maxOnes;
}

int main(){
    vector<int>nums={1,1,0,1,1,1};
    cout<< "Maximum number of consecutive ones = "<< findMaxConsecutiveOnes(nums)<< endl;

    return 0;
}