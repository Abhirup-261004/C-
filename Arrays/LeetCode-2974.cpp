#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> numberGame(vector<int>& nums) {
    int n = nums.size();
    vector<int>res(n,0);
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i+=2){
        int minAlice=nums[i];
        int minBob=nums[i+1];

        res[i]=minBob;
        res[i+1]=minAlice;
    }
    return res;
}

int main(){
    vector<int>nums={5,4,2,3};
    vector<int>res;
    res=numberGame(nums);

    for(int r:res){
        cout<<r<<" ";
    }
    cout<<endl;
    return 0;
}