#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

void getPerms(vector<int>&nums,int idx,vector<vector<int>>&ans){
    int n= nums.size();
    if(idx==n){
        ans.push_back({nums});
        return;
    }
    unordered_set<int>seen;

    for(int i=idx;i<n;i++){
        if(seen.find(nums[i])!= seen.end()){
            continue;
        }
        seen.insert(nums[i]);
        swap(nums[idx],nums[i]);
        getPerms(nums,idx+1,ans);

        swap(nums[idx],nums[i]);//Backtracking
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    getPerms(nums,0,ans);
    return ans;
}
int main() {
    vector<int> nums = {1,1,2};
    auto all = permuteUnique(nums);

    for (const auto& perm : all) {
        for (int x : perm) 
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}