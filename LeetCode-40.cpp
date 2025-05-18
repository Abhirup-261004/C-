#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void getAllCombinations(vector<int>& arr, int start, int target, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < arr.size(); ++i) {
            if (i > start && arr[i] == arr[i - 1]) continue;  // Skip duplicate elements

            if (arr[i] > target) break;  // Stop if current element exceeds remaining target

            current.push_back(arr[i]);
            getAllCombinations(arr, i + 1, target - arr[i], current, result);
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());  // Ensure sorted for duplicate skipping
        vector<vector<int>> result;
        vector<int> current;
        getAllCombinations(candidates, 0, target, current, result);
        return result;
    }
    int main(){
    int n, target;
    cin >> n;                         // number of elements
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];                // the candidates
    }
    cin >> target;                    // the target sum

    auto res = combinationSum2(arr, target);
    // print each combination
    for (const auto &comb : res) {
        for (int x : comb) {
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}