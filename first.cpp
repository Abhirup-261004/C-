#include<iostream>
using namespace std;

int main(){
    int a=10,b=5;
    cout << "Sum is:" << (a+b) << endl;
    cout << "Difference is :" << (a-b)<< endl;
    cout << "Product is :" << (a*b)<< endl;
    cout << "Division="<< (a/b) << endl;
    cout << "Modulo: "<< (a%b)<< endl;
    cout << (a<=b)<< endl;//False
    cout << (a>=b)<< endl;//True
    cout<< (a!=b)<< endl;//True
    cout << (a==b)<< endl;//False
    cout << ((3<1) || (3>1))<< endl;
    cout <<((3<1) && (3>1)) << endl;
    return 0;
}