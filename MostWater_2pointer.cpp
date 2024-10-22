#include<iostream>
#include<vector>
using namespace std;

int mostArea(vector <int> &height){
    int lp=0,rp=height.size()-1,maxWater=0;
    while(lp<rp){
        int w=rp-lp;
        int ht=min(height[lp],height[rp]);
        int currArea=w*ht;
        maxWater=max(maxWater,currArea);
        height[lp]<height[rp]?lp++:rp--;
    }
    return maxWater;
}

int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<< "Max amount of Water is:"<< mostArea(height);
    return 0;
}