#include<iostream>
#include<vector>

using namespace std;
vector<int> getRow(int rowIndex) {
    vector<int> res(1, 1);
    long long prev = 1;
    for(int k = 1; k <= rowIndex; k++) {
        long long next_val = prev * (rowIndex - k + 1) / k;
        res.push_back(next_val);
        prev = next_val;
    }
    return res;
}
int main(){
    int r=4;
    vector<int>ans=getRow(r);

    for(int a:ans){
        cout<< a<<" ";
    }
    cout<<endl;
}