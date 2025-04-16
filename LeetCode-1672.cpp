#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int m=accounts.size(),n=accounts[0].size();
    int maxWealth=INT32_MIN;
    for(int i=0;i<m;i++){
        int currentWealth=0;
        for(int j=0;j<n;j++){
            currentWealth+=accounts[i][j];
        }
        maxWealth=max(maxWealth,currentWealth);
    }
    return maxWealth;
}

int main(){
    vector<vector<int>>accounts={{2,8,7},{7,1,3},{1,9,5}};
    cout<<"Maximum Wealth="<<maximumWealth(accounts)<<endl;

    return 0;
}