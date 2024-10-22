#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Entert n:";
    cin>> n;
    int sum=0,i=1;
    while(i<=n){
        if(i%2==0){
            sum+=i;
        }
        i++;
    }
    cout<<"Sum of even numbers:"<< sum<< endl;
    return 0;
}