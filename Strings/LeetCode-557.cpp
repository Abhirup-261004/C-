#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseWords(string s) {
    int n = s.length();
    string ans = "";
    bool firstWord = true;

    for (int i = 0; i < n; i++) {
        string word = "";

        // Extract a word
        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        // Reverse the word
        reverse(word.begin(), word.end());

        // Append to ans
        if (!word.empty()) {
            if (!firstWord) ans += " ";
            ans += word;
            firstWord = false;
        }
    }

    return ans;
}

int main(){
    string s="Let's take LeetCode contest";
    cout<< reverseWords(s)<<endl;

    return 0;
}