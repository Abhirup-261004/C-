#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter no to be checked for prime"<< endl;
    cin>> n;
    int count=0;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            count=1;
            break;
        }
    }
    if(count==0){
        cout<< "PRIME"<<endl;
    }else{
        cout<< "NON-PRIME"<< endl;
    }
}