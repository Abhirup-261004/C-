#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>nums,int n,int m,int maxAllotedTime){//To chcek whether mid is possible or not
    int pt=1,units=0;
    for(int i=0;i<n;i++){
        if(nums[i]>maxAllotedTime){
            return false;
        }
        if(units+nums[i]<=maxAllotedTime){//if painter can paint the units
            units+=nums[i];

        }else{ //increase no of painters
            pt++;
            units=nums[i];
        }

    }
    return pt>m?false:true;
}

int painterPartition(vector<int>&nums,int n,int m){// Function to calculate the miniumum amount of time taken to paint the boards
    if(m>n){
        return -1;
    }
    int sum=0,maxVal=0;
    for(int i=0;i<n;i++){ 
        sum+=nums[i];
        
    }
    int st=0,end=sum,ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPossible(nums,n,m,mid)){ //If mid is valid We check towards left for smaller value
            ans=mid;
            end=mid-1;
        }else{ // If mid is invalid we check towards right for larger value which would be valid
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>nums={40,30,10,20};
    int n=4,m=2;
    cout<< "Least Time taken:"<< painterPartition(nums,n,m);
    return 0;

}