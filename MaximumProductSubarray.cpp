#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums.front();
        }
        int maxPro = 0;
        int maxx = 1, minn = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            int tmp = maxx*nums[i];
            maxx = max(max(tmp,minn*nums[i]),nums[i]);
            minn = min(min(tmp,minn*nums[i]),nums[i]);
            maxPro=max(maxPro,maxx);
        }
        return maxPro;
    }
};