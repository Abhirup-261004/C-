#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortArrayByParityII(vector<int>& nums) {
    int n = nums.size();
    int i = 0;  // even index
    int j = 1;  // odd index

    while (i < n && j < n) {
        if (nums[i] % 2 == 0) {
            i += 2;
        } else if (nums[j] % 2 == 1) {
            j += 2;
        } else {
            // nums[i] is odd and nums[j] is even -> swap them
            swap(nums[i], nums[j]);
            i += 2;
            j += 2;
        }
    }
    return nums;
}

int main(){
    vector<int>nums={4,2,5,7};
    sortArrayByParityII(nums);
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}