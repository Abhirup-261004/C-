#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void getAllSubsets(vector<int>&arr,vector<int>&ans,int i,vector<vector<int>>&allSubsets){
    if(i==arr.size()){
        allSubsets.push_back({ans});
        return;
    }
    //include
    ans.push_back(arr[i]);
    getAllSubsets(arr,ans,i+1,allSubsets);

    ans.pop_back();//backtrack
    //exclude
    int idx=i+1;
    while(idx<arr.size() && arr[idx]==arr[idx-1]){
        idx++;
    }
    getAllSubsets(arr,ans,idx,allSubsets);
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
   vector<vector<int>>allSubsets;
    vector<int>ans;

    getAllSubsets(nums,ans,0,allSubsets);
    return allSubsets; 
}

int main() {
    // Example usage: read a list (with possible duplicates) from stdin
    int n;
    cin >> n;                       // number of elements
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // Generate all unique subsets
    vector<vector<int>> allSubsets = subsetsWithDup(nums);

    // Print them
    for (const auto& subset : allSubsets) {
        cout << "{ ";
        for (int v : subset) {
            cout << v << " ";
        }
        cout << "}\n";
    }

    return 0;
}