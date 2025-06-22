#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(string str) {
    stack<char> st;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            st.push(str[i]);
        } else {
            if (st.empty()) {
                return false;
            }

            // Fix: st.top -> st.top() (function call)
            // Also corrected quotes for '{' (was using string literal by mistake in original code)
            if ((st.top() == '(' && str[i] == ')') ||
                (st.top() == '{' && str[i] == '}') ||
                (st.top() == '[' && str[i] == ']')) {
                st.pop();
            } else {
                return false;
            }
        }
    }

    return st.size()==0;
}

int main(){
    string str="{[()]}{";
    cout<<"Valid Parenthesis:"<<isValid(str)<<endl;
    return 0;
}