#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a=8;
    int *ptr= &a;
    cout<< ptr << endl;
    cout<< &a<< endl;
    return 0;
}