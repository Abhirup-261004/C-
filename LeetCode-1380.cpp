#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

vector<int> luckyNumbers(vector<vector<int>>& matrix) {
    int m=matrix.size(),n=matrix[0].size();
    vector<int> row_mins(m,INT32_MAX);
    vector<int> col_max(n,0);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int el= matrix[i][j];
            row_mins[i]=min(row_mins[i],el);
            col_max[j]=max(col_max[j],el);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int el=matrix[i][j];
            if(el==row_mins[i] && el==col_max[j]){
                return {el};
            }
        }
    }
    return {};     
}

int main(){
    vector<vector<int>> matrix={{3,7,8},{9,11,13},{15,16,17}};
    vector<int>ans=luckyNumbers(matrix);

    for(int i=0;i<ans.size();i++){
        cout<<i<< endl;
    }

    return 0;
}