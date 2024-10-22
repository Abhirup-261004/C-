#include<iostream>
using namespace std;

int largestElement(int arr[],int n){
    int largest=INT64_MIN;
    for(int i=0;i<n;i++){
        largest=max(arr[i],largest);
    }

    return largest;
}

int smallestElement(int arr[],int n){
    int smallest=INT64_MAX;
    for(int i=0;i<n;i++){
        smallest=min(arr[i],smallest);
    }

    return smallest;
}


int main(){
    int n;
    int arr[n];

    cout<< "Enter no of elements in array:";
    cin>> n;
    cout<< "Enter elements of the array:";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout << "Largest element="<< largestElement(arr,n);
    cout << "Smallest element"<< smallestElement(arr,n);

    return 0;

}