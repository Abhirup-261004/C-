#include<iostream>
#include<vector>
using namespace std;


int removeDuplicate(vector<int>&nums){
    int k=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[k]){
            k++;
            nums[k]=nums[i];
        }

    }
    return k+1;
}

int main(){
    vector<int>nums={1,1,2};
    cout<< removeDuplicate(nums)<< endl;
    int k=removeDuplicate(nums);
    for(int i=0;i<k;i++){
        cout<< nums[i];
    }
    return 0;
}