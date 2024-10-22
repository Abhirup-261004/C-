#include <iostream>
using namespace std;

int main(){
    int n=3;
    int x=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< x<<" ";
            x++;
        }
        cout<< endl;
    }
    cout<<"After Pattern:"<< x;
    return 0;
}