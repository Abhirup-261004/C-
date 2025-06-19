#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> divideArray(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    vector<vector<int>>result;

    for(int i=0;i<nums.size();i+=3){
        if(i+2>=nums.size()|| nums[i+2]-nums[i]>k)return {};
        result.push_back({nums[i],nums[i+1],nums[i+2]});
    }
    return result;
}

int main(){
    vector<int>nums={1,3,4,8,7,9,3,5,1};
    int k=2;
    vector<vector<int>>ans;
    ans=divideArray(nums,k);
    for(vector<int> results:ans){
        for(int result:results){
            cout<<result<<" ";
        }
        cout<<endl;
    }
    return 0;
}