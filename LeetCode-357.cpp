 #include<iostream>
 using namespace std;
 
 int countNumbersWithUniqueDigits(int n) {
    if(n==0){
        return 1;
    }
    if(n==1){
        return 10;
    }
    int total=10;// 0-9 for all the numbers
    int current=9;//Starts 1-9 for the first number
    for(int i=2;i<=n;i++){
        current *= (10-(i-1));
        total+=current;
    } 
    return total;
}

int main(){
    int n=2;
    cout<<countNumbersWithUniqueDigits(n)<<endl;

    return 0;
}