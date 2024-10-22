#include<iostream>
using namespace std;

int main(){
    int n;

    cout<< "Enter no of elements in array:";
    cin>> n;
    int arr[n];
    cout<< "Enter elements of the array:";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    int smallest=arr[0];
    int largest=arr[0];
    for(int i=0;i<n;i++){
        smallest=min(arr[i],smallest);
        largest-max(arr[i],largest);
    }
    cout << "Largest element="<< largest << endl;
    cout << "Smallest element="<< smallest<< endl;

    return 0;

}