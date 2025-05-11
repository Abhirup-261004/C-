#include<iostream>
#include<vector>
using namespace std;

bool threeConsecutiveOdds(vector<int>& arr) {
    int n=arr.size();
    for(int i=1;i<n-1;i++){
        if((arr[i-1]%2!=0) && (arr[i]%2!=0)&& (arr[i+1]%2!=0)){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int>nums ={1,2,34,3,4,5,7,23,12};
    cout<< threeConsecutiveOdds(nums)<<endl;

    return 0;
}