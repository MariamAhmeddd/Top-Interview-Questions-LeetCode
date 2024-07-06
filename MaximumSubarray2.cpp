class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxAll = -1;
        long long maxNow = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            maxNow = maxNow + nums[i];
            if(maxAll < maxNow)
            {
                maxAll = maxNow;
            }
            if(maxNow < 0)
            {
                maxNow = 0;
            }
        }
        if(maxAll < 0)
        {
            long long tmp = -20000;
            for(int i =0; i < nums.size(); i++)
            {
                if(tmp < nums[i])
                {
                    tmp = nums[i];
                }
            }
            maxAll = tmp;
        }
        return maxAll;
        
    }
};
