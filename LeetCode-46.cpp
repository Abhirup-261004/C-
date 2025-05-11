#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void getPerms(vector<int>&nums,int idx,vector<vector<int>>&ans){
    int n= nums.size();
    if(idx==n){
        ans.push_back({nums});
        return;
    }
    for(int i=idx;i<n;i++){
        swap(nums[idx],nums[i]);
        getPerms(nums,idx+1,ans);

        swap(nums[idx],nums[i]);//Backtracking
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    getPerms(nums,0,ans);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};
    auto all = permute(nums);

    for (const auto& perm : all) {
        for (int x : perm) 
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}