#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int k=2;
    if(nums.size()<=2){
        return nums.size();
    }
    for(int i=2;i<nums.size();i++){
        if(nums[i]!=nums[k-2]){
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}

int main(){
    vector<int>nums={1,1,1,2,2,2,3,3};
    int k=removeDuplicates(nums);
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}