#include<bits/stdc++.h>
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();++i){    
            int last = nums.size()-1-i;
            int max = getMax(nums,0,last);
            swap(nums,max,last);
        }
    }
    void swap(vector<int>& nums, int first, int second){
        int temp = nums[first];
        nums[first] = nums[second];
        nums[second] = temp;
    }

    int getMax(vector<int>& nums, int start, int end){
        int max=start;
        for(int i=start;i<=end;++i){
            if(nums[i]>nums[max]){
                max=i;
            }
        }
        return max;
    }
};