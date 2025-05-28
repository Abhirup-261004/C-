#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>ans;
    int st=0,end=nums.size()-1;
    while(st<end){
        int sum=nums[st]+nums[end];
        if(sum==target){
            ans.push_back(st+1);
            ans.push_back(end+1);
            return ans;
        }else if(sum<target){
            st++;
        }else{
            end--;
        }
    }
    return {-1,-1};
}
int main(){
    vector<int>numbers={2,7,11,15};
    int target=9;
    vector<int>answers;
    answers=twoSum(numbers,target);
    for(int ans:answers){
        cout<<ans<<" ";
    }
    return 0;
}