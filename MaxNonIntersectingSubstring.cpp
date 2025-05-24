#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int maxNonIntersectingSubstrings(string word) {
    int n = word.length();
    vector<pair<int, int>> candidates;

    // Step 1: Generate all substrings of length >= 4 with same start & end char
    for (int i = 0; i < n; ++i) {
        for (int j = i + 3; j < n; ++j) {
            if (word[i] == word[j]) {
                candidates.push_back({i, j});
            }
        }
    }

    // Step 2: Sort by end index (greedy)
    sort(candidates.begin(), candidates.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    // Step 3: Greedily pick non-overlapping substrings
    int count = 0, lastEnd = -1;
    for (int i = 0; i < candidates.size(); ++i) {
        int start = candidates[i].first;
        int end = candidates[i].second;
        if (start > lastEnd) {
            count++;
            lastEnd = end;
        }
    }

    return count;
}

int main() {
    string word1 = "abcdeafdef";     // Output: 2
    string word2 = "bcdaaaab";       // Output: 1
    cout << maxNonIntersectingSubstrings(word1) << endl;
    cout << maxNonIntersectingSubstrings(word2) << endl;
    return 0;
}
