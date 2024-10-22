#include<iostream>
using namespace std;

void reverseArray(int arr[],int sz){
    int start=0;
    int end=sz-1;
    while(start<end);{
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int sz=10;
    cout<< "Originial Array=";
    for(int i=0;i<sz;i++){
        cout<< arr[i]<< endl;
    }

    reverseArray(arr,sz);

    cout<< "New array:";
    for(int i=0;i<sz;i++){
        cout<< arr[i]<< endl;
    }
    return 0;
}