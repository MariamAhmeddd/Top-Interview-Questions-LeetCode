#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = 0;
        int pre = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            pre+=nums[i];
            if(pre < 0)
            {
                pre = 0;
            }
            maxSum=max(maxSum,pre);
        }
        if(!pre && !maxSum)
        {
            sort(nums.begin(),nums.end(),greater<int>());
            return nums.front();
        }
        return maxSum;
    }
};