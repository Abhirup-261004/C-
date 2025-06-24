#include<iostream>
#include<vector>
using namespace std;

vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
    vector<int>res;
    int r=0;
    int n= nums.size();
    for(int j=0;j<n;j++){
        if(nums[j]==key){
            int l=max(r,j-k);
            r=min(n-1,j+k)+1;
            for(int i=l;i<r;i++){
                res.push_back(i);
            }
        }
    }
    return res;
}

int main(){
    vector<int>nums={3,4,9,1,3,9,5};
    int key=9,k=1;
    vector<int>ans;
    ans=findKDistantIndices(nums,key,k);
    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}