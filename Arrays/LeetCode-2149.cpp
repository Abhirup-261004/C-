#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n=nums.size();
    vector<int>ans(n,0);
    int positiveIdx=0,negativeIdx=1;
    for(auto num:nums){
        if(num>0){
            ans[positiveIdx]=num;
            positiveIdx+=2;
        }else if(num<0){
            ans[negativeIdx]=num;
            negativeIdx+=2;
        }
    }
    return ans;
}

int main(){
    vector<int>nums={3,1,-2,-5,2,-4};
    vector<int>res;
    res=rearrangeArray(nums);
    for(int r:res){
        cout<<r<<" ";
    }
    cout<<endl;
    return 0;
}

