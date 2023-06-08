#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = 0;
        int sum = 0;
        int maxnum = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            maxnum = max(maxnum,nums[i]);
            if(sum<0){
                sum = 0;
            }
            maxsum = max(sum,maxsum);
        }
        if(maxsum==0){
            maxsum = maxnum;
        }

        return maxsum;
    }
};