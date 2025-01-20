#include<bits/stdc++.h>

using namespace std;

int maxProductDifference(vector<int>& nums) {
        int largest=INT_MIN,secondLargest=INT_MIN;
        int smallest=INT_MAX,secondSmallest=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<smallest){
                secondSmallest=smallest;
                smallest=nums[i];
            }else if(nums[i]<secondSmallest){
                secondSmallest=nums[i];
            }

            if(nums[i]>largest){
                secondLargest=largest;
                largest=nums[i];
            }else if(nums[i]>secondLargest){
                secondLargest=nums[i];
            }

        }
        return ((largest*secondLargest)- (smallest * secondSmallest));

    }

    int main(){
        vector<int>nums={5,6,2,7,4};

        cout<< "Maximum Product Difference = "<< maxProductDifference(nums);

        return 0;
    }