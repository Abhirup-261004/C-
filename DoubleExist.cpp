#include<iostream>
#include<vector>
using namespace std;

bool doubleExist(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        for (int j=0;j<arr.size();j++){
            if(arr[i]== 2*arr[j] && i!=j){
                return true;
            }
        }
        
    }
    return false;
}

int main(){
    vector<int>arr={10,2,5,3};
    cout<< doubleExist(arr);

    return 0;
}