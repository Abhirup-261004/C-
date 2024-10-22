#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    cout<< "size="<< vec.size()<< endl;
    vec.push_back(25);
    vec.push_back(56);
    vec.push_back(65);
    vec.push_back(15);
    cout<< "Size after push_back="<< vec.size()<< endl;
    vec.pop_back();
    cout<< "Size after pop_back="<< vec.size()<< endl;

    cout<< vec.front()<< endl;
    cout<< vec.back()<< endl;
    cout<< vec.at(2)<< endl;
    return 0;
}