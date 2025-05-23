#include<iostream>
using namespace std;

int find(int  n,int k){
    if(n==1){
        return 0;
    }
    return (find(n-1,k)+k)%n;
}

int findTheWinner(int n, int k) {
    return find(n,k)+1;
}

int main(){
    int n=5;
    int k=2;
    cout<< findTheWinner(n,k)<<endl;

    return 0;
}