#include<iostream>
#include<vector>
#include<set>
using namespace std;
set<vector<int>>s;
    void getAllCombinations(vector<int>&arr,int idx,int tar,vector<vector<int>> &ans,vector<int>&combin){
        if(idx == arr.size() || tar<0){
            return;
        }
        if(tar==0){
            if(s.find(combin)==s.end()){
                ans.push_back(combin);
                s.insert(combin);
            }            
            return;
        }

        combin.push_back(arr[idx]);
        //single
        getAllCombinations(arr,idx+1,tar-arr[idx],ans,combin);
        //multiple
        getAllCombinations(arr,idx,tar-arr[idx],ans,combin);
        combin.pop_back();

        //Exclusion
        getAllCombinations(arr,idx+1,tar,ans,combin);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>combin;

        getAllCombinations(arr,0,target,ans,combin);
        return ans;
    }

int main(){
    int n, target;
    cin >> n;                         // number of elements
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];                // the candidates
    }
    cin >> target;                    // the target sum

    auto res = combinationSum(arr, target);
    // print each combination
    for (const auto &comb : res) {
        for (int x : comb) {
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}