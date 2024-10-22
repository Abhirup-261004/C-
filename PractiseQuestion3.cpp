#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter n:";
    cin>> n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }else{
            sum=sum+i;
        }
    }
    cout<<"Sum of odd numbers:"<< sum<< endl;
    return 0;
}