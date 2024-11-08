#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<set>
using namespace std;

bool comparator(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    else return false;

    if(p1.first<p2.first) return true;
    else return false;

}

int main(){

    //Vector with pairs
    vector<pair<int,int>>vec={{1,2},{3,4},{5,6},{2,3}};
    sort(vec.begin(),vec.end(),comparator);
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

    cout<<endl;
    cout<<endl;

    //Priority Queue

    priority_queue<int>pq;//Largest value has top priority
    pq.push(45);
    cout<<pq.top()<<endl;//45
    pq.push(56);
    cout<<pq.top()<<endl;//56
    pq.push(10);
    cout<<pq.top()<<endl;//56
    cout<<endl;

    //Maps

    map<string,int>m;
    m["Tv"]=100;//key is unique .It cannot be changed but the value can be changed
    m["laptop"]=50;
    m["Camera"]=200;

    m.insert({"watch",150});
    m.emplace("headphone",45);

    

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;//Sorted in ascending order
    }

    cout<<m.count("laptop")<<endl;
    m.erase("tv");

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;//Sorted in ascending order
    }

    cout<<endl;

    //Set
    //Unique and sorted values

    set<int>set;
    set.insert(3);
    set.insert(2);
    set.insert(5);
    set.insert(1);
    set.insert(4);

    set.insert(1);
    set.insert(2);
    set.insert(3);

    cout<<"Size:"<<set.size()<<endl;//5 as all elements are unique

    for(auto val:set){
        cout<<val<<" ";
    }

    cout<<endl;



    return 0;
}