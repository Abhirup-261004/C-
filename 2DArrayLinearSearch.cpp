#include<iostream>
using namespace std;

bool linearSearch(int matr[][3],int r, int c,int key){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matr[i][j]== key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int matrix[4][3]= {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    int rows=4;
    int columns=3;
    int key = 6;
    cout<< linearSearch(matrix,rows,columns,key);
    return 0;
}