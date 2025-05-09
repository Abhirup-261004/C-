#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int>arr,int tar,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;

        if(arr[mid]==tar){
            return mid;
        }
        else if(arr[mid]<=tar){
            return binSearch(arr,tar,mid+1,end);
        }
        else{
            return binSearch(arr,tar,st,mid-1);
        }
    }
    return -1;
}

int search(vector<int>& nums, int target) {
    int st=0,end=nums.size()-1;
    return binSearch(nums,target,0,nums.size()-1);
}

int main(){
    vector<int>nums={-1,0,3,5,9,12};
    int target=9;
    cout<< search(nums,target);

    return 0;
}