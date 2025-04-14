#include<iostream>
using namespace std;

int diagonalSum(int matr[][4],int n){
    int diaSum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                diaSum += matr[i][j];
            }
            else if(j== n-1-i){
                diaSum += matr[i][j];
            }
        }
    }
    return diaSum;
}

int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4;
    cout<< "Diagonal Sum = "<<diagonalSum(matrix,n);

    return 0;
}