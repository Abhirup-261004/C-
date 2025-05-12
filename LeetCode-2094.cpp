#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

vector<int> findEvenNumbers(vector<int>& digits) {
    set<int>result;
    int n=digits.size();
    for(int i=0;i<n;i++){
        if(digits[i]==0){
            continue;
        }
        for(int j=0;j<n;j++){
            if(j==i){
                continue;
            }
            for(int k=0;k<n;k++){
                if(k==i||k==j){
                    continue;
                }
                int num=digits[i]*100 +digits[j]*10 +digits[k];
                if(num%2==0){
                    result.insert(num);
                }
            }
        }
    }
    vector<int>ans(result.begin(),result.end());
    sort(ans.begin(),ans.end());
    return ans;
}

int main() {
    vector<int> digits = {2, 1, 3, 0};
    vector<int> ans = findEvenNumbers(digits);
    for (int num : ans) {
        cout << num << " ";
    }
    return 0;
}