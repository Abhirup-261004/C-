#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=6;
    int arr[6]={1,2,3,4,5,6};
    int maxSum=INT16_MIN;
    for(int st=0;st<n;st++){
        int arrSum=0;
        for(int end=st;end<n;end++){
            arrSum+=arr[end];
            maxSum=max(arrSum,maxSum);
        }
    }
    cout<< "MAX SUB ARRAY SUM="<< maxSum<< endl;
    
    return 0;
}