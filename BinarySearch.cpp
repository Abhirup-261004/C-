#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int target){//iterative
    int n=arr.size();
    int st=0,end=n-1;
    while(st<=end){
        int mid=st +(end-st)/2;
        if(target<arr[mid]){
            end=mid-1;
        }else if(target>arr[mid]){
            st=mid+1;
        }else{
            return mid;
        }

    }
    return -1;
}

int main(){
    vector<int>odd={-1,0,3,4,5,9,12};
    int target=12;

    cout<< binarySearch(odd,target);

    vector<int>even={-1,0,3,5,9,12};
    int target2=0;

    

    return 0;
}


