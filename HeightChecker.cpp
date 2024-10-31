#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int heightChecker(vector<int>&heights){
    int n=heights.size();
    vector<int>expected=heights;
    sort(expected.begin(),expected.end());
    int count=0;
    for(int i=0;i<n;i++){
        if(heights[i]!=expected[i]){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int>heights={1,1,4,2,1,3};
    cout<< heightChecker(heights);

    return 0;
}