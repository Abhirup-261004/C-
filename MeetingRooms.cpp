#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

bool canAttend(vector<vector<int>>& arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());

    int k=1;

    for(int i=0;i<n-1;i++){
        if(arr[i+1][0] >= arr[i][1]){
            k++;
        }else{
            return false;
        }
    }
    if(k==n){
        return true;
    }

    return false;
}


int main(){
    vector<vector<int>>arr={{1,4},{10,15},{7,10}};
    cout<< "Can Attend all meetings ? "<< canAttend(arr);
    return 0;
}