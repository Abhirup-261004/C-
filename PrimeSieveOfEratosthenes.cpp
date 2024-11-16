//To find no of prime numbers in a range from 1 to n that are strictly smaller than n using the sieve or eratosthenes

#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n){
    int count=0;
    vector<bool>isPrime(n+1,true);//Assuming all numbers in the range are prime
    for(int i=2;i<n;i++){
        if(isPrime[i]){
            count++;

            for(int j=i*2;j<n;j+=i){//To remove all the numbers divisible by i from the list of prime numbers
                isPrime[j]=false;
            }
        }

    }
    return count;
}

int main(){
    int n;
    cout<< "Enter the range"<< endl;
    cin>> n;

    cout<< "No of prike numbers in the range: "<< countPrime(n)<< endl;

    return 0;
}

