#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){
    vector<pair<int,int>>vec={{1,2},{3,4},{5,6}};
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    vec.push_back({7,8});//just inserts the value as it is
    vec.emplace_back(9,10);//in place objects create
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}