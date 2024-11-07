#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){
    pair<int,char>p={1,'a'};
    cout<<p.first<<endl;//1
    cout<<p.second<< endl;//a

    pair<string,pair<string,int>>p2={"Abhirup",{"Nandi",20}};
    cout<<p2.first<<endl;//Abhirup
    cout<<p2.second.first<<endl;//Nandi
    cout<<p2.second.second<<endl;//20
    return 0;
}