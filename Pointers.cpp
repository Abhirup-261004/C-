#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a=8;
    int *ptr= &a;

    int **ptr2=&ptr;
    cout<< ptr << endl;
    cout<< &a<< endl;
    cout<< endl;
    cout<< &ptr<<endl;
    cout<< ptr2<< endl;

    int **pointer=NULL;
    cout<< pointer<< endl;
    
    return 0;
}