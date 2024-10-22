#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter capacity of vector:"<< endl;
    cin>> n;
    vector<int>vec(n,0);
    for(int val:vec){
        cin>> val;

    }
    int target;
    cout<<"Enter number that you want to search:";
    cin>> target;
    int count=0;
    for(int val:vec){
        if(val== target){
            count=1;
            break;
        }

    }
    if(count==1){
        cout<< "Found"<< endl;
    }else{
        cout<< "Not Found"<< endl;

    }

    return 0;
}