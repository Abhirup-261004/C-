#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no of rows and columns:";
    cin >> n;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n;j++){
            cout<< ch;
            ch++;

        }
        cout<< endl;
    }
    return 0;
}