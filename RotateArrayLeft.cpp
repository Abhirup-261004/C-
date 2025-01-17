#include<iostream>
#include<vector>
using namespace std; 

void rotateArr(vector<int>&arr,int d){
    int n=arr.size();
    d=d%n; //To handle test cases where d > n
    int a=0,b=d-1;
    while(a<b){
        swap(arr[a],arr[b]);
        a++,b--;
    }
    b=d;

    int end=n-1;

    while(b<end){
        swap(arr[b],arr[end]);
        b++,end--;
    }

    int start=0;
    end=n-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++,end--;
    }


}

int main(){
    vector<int>arr={1,2,3,4,5};
    int d=2;
    rotateArr(arr,d);

    for(auto c: arr){
        cout<< c<< " ";
    }

    return 0;
}