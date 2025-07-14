#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
    int n=nums.size();
    int i=-1;
    int j=0;
    while(j<n){
        if(nums[j]%2){
            if(i==-1)i=j;
            j++;
        }else if(i==-1){
            j++;
        }else{
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
    }
    return nums;
}

int main(){
    vector<int>nums={3,1,2,4};
    sortArrayByParity(nums);
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}