//Calculate power of x raised to n (x^n)
#include<iostream>
#include<vector>
using namespace std;

double myPow(double x,int n){
    if(n==0){
        return 1.0;
    }
    if(x==0){
        return 0.0;
    }
    if(x==1){
        return 1.0;
    }
    if(x==-1 && n%2==0){
        return 1.0;
    }
    if(x==-1 && n%2!=0){
        return -1.0;
    }
    long binForm=n;
    double ans;
    if(n<0){
        x=1/x;
        binForm=-binForm;
    }
    while(binForm>0){
        if(binForm%2==1){
            ans*=x;
        }
        x*=x;
        binForm/=2;
    }
    return ans;
}

int main(){
    double x;
    int n;
    cout<< "Enter x and n"<< endl;
    cin >> x >> n;
    double ans=myPow(x,n);
    cout<< x <<" raised to the power of "<< n << " is :"<< (int)ans;
    return 0;
}