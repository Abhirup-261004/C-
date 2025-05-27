#include<iostream>
using namespace std;

int differenceOfSums(int n, int m) {
    int nums1=0,nums2=0;
    for(int i=1;i<=n;i++){
        if(i%m==0){
            nums2+=i;
        }else{
            nums1+=i;
        }
    }
    return nums1-nums2;
}
int main(){
    int n=25;
    int m=5;
    cout<< differenceOfSums(n,m);
    return 0;
}