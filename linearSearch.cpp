#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;

        }
    }
    return -1;
}

int main(){
    int n;
    cout<< "Enter no of elements in array";
    cin>> n;
    int arr[n];
    cout<<"Enter elements of the array:";
    for(int i=0;i<n;i++){
        cin>> arr[i];

    }

    int target;
    cout<< "Enter number that you want to search in array:";
    cin>> target;
    cout<< linearSearch(arr,n,target)<< endl;
         
    return 0;
}