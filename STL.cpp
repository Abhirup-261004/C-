#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;

int main(){

    //Vector with pairs
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
    
    // Stack: Last in; Last out
    stack<int>s;
    s.push(1);//top
    s.push(2);//top
    s.push(3);//top
    s.push(4);//top

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    // while(!s.empty()){
    //     cout<<"top: "<<s.top()<<endl;
    //     s.pop();
    // }
    cout<< endl;
    stack<int>s2;
    s2.swap(s);
    cout<<"Size of s:"<<s.size()<< endl;//0
    cout<<"Size of s2:"<<s2.size()<<endl;//4

    // Queue

    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout<<"Front: "<<q.front()<<endl;//1

    cout<<"Size: "<<q.size()<<endl;//3

    while(!q.empty()){
        cout<<"Current Front: "<<q.front()<<endl;
        q.pop();//Popped in the same order as pushed
    }
    return 0;
}