#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter our age :";
    cin>> age;
    if(age>=18){
        cout <<"You can Vote" <<endl;
    }else{
        cout<< "You can't vote";
    }
    return 0;
}