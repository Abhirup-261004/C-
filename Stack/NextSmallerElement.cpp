#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={3,1,0,8,6};

    //Next Smaller Element
    stack<int>s;
    vector<int>ans(arr.size(),0);
    int n=arr.size();
    for(int i=0;i<n;i++){
        while(s.size()>0 && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }

    //print
    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}