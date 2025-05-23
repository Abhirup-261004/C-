#include<iostream>
#include<vector>

using namespace std;

int findFirst(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1, index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            index = mid;
            high = mid - 1; // Search left
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return index;
}

int findLast(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1, index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            index = mid;
            low = mid + 1; // Search right
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return index;
}
vector<int> searchRange(vector<int>& nums, int target) {
    return {findFirst(nums, target), findLast(nums, target)};
}

int main(){
    vector<int>nums={5,7,7,8,8,10};
    int target= 8;
    vector<int>ans;
    ans=searchRange(nums,target);

    for(int range:ans){
        cout<<range<<" ";
    }
    cout<<endl;
    return 0;
}