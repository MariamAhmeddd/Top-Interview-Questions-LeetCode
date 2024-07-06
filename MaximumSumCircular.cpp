class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        /*
        The idea is to modify Kadane’s algorithm to find a minimum contiguous subarray sum and the maximum
        contiguous subarray sum, then check for the maximum value between the max_value and the value left
        after subtracting min_value from the total sum.
        */
        int maxAll = nums[0];
        int maxNow = nums[0];
        int minAll = nums[0];
        int minNow = nums[0];
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum+=nums[i];
        }
        for(int i = 1; i < nums.size(); i++)
        {
            maxNow = max(maxNow + nums[i], nums[i]);
            maxAll = max(maxAll, maxNow);

            minNow = min(minNow + nums[i], nums[i]);
            minAll = min(minAll, minNow);
        }
        if(sum - minAll == 0)
        {
            return maxAll;
        }
        return max(maxAll, (sum - minAll));
    }
};
