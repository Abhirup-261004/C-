#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

int calPoints(vector<string>& operations) {
    stack<int>st;
    for(auto operation:operations){
        if(operation=="+"){
            int sum=0;
            int temp=st.top();
            st.pop();
                sum=st.top()+temp;
            st.push(temp);
            st.push(sum);
        }
        else if(operation=="D") st.push(st.top()*2);
        else if(operation=="C") st.pop();
        else st.push(stoi(operation));
    }
    int total=0;
    while(!st.empty()){
        total+=st.top();
        st.pop();
    }
    return total;
}

int main(){
    vector<string>ops={"5","2","C","D","+"};
    cout<<calPoints(ops)<<endl;
    return 0;
}