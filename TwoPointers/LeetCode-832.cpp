#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    int n=image.size(),m=image[0].size();
    for(int i=0;i<n;i++){
        reverse(image[i].begin(),image[i].end());
        for(int j=0;j<m;j++){
            image[i][j]^=1;
        }
    }
    return image;
}

int main(){
    vector<vector<int>>image={{1,1,0},{1,0,1},{0,0,0}};
    vector<vector<int>>ans;
    ans=flipAndInvertImage(image);
    for(vector<int> anss:ans){
        for(int el:anss){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return 0;
}