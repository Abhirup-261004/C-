#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int findLucky(vector<int>& arr) {
    unordered_map<int,int>freq;

    for(int num:arr){
        freq[num]++;
    }

    int maxLucky=-1;
    for(auto [num,count]:freq){
        if(num==count){
            maxLucky=max(maxLucky,num);
        }
    }        
    return maxLucky;
}

int main(){
    vector<int>arr={1,2,2,3,3,3};
    cout<<"Maximum Lucky Number:"<<findLucky(arr)<<endl;
    return 0;
}