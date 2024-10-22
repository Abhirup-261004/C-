#include<iostream>
using namespace std;

int printHello(){
    cout<< "Hello!\n";
    return 3;
}

int main(){
    int val=printHello();
    cout<< "Val="<< val;
    return 0;
}