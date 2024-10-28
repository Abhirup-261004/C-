#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>&arr,int c,int n,int maxDistance){//to check if mid is a possible value or not
    int cows=1,lastStallPos=arr[0];
    for(int i=1;i<n;i++){
        if((arr[i]-lastStallPos)>=maxDistance){//check for max distance
            cows++;
            lastStallPos=arr[i];

        }
        if(cows==c){
            return true;
        }
    }
    return false;//executed only if the value of cows never becomes  equal to c 
}

int getDistance(vector<int>&arr,int c,int n){
    sort(arr.begin(),arr.end()); //arrange in ascending order
    int st=1,end=arr[n-1]-arr[0],ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPossible(arr,c,n,mid)){//if possible check right part
            ans=mid;
            st=mid+1;
        }else{// not possible chcek left part
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr={1,2,8,4,9};
    int c=3,n=5;
    cout<< getDistance(arr,c,n);
    return 0;
}