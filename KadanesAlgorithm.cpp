#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};
    int currSum=0,maxSum=INT16_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum==0){
            currSum=0;
        }
    }
    cout<< "Max Sub Array Sum="<< maxSum<< endl;
    return 0;
    
}