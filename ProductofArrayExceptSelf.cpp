#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre,post;
        for(int i = 0; i < nums.size(); i++)
        {
            pre.push_back(0);
            post.push_back(0);
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(i==0)
            {
                pre[i]=nums[i];
                continue;
            }
            pre[i] = pre[i - 1] * nums[i];
        }
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            if(i == nums.size() - 1)
            {
                post[i] = nums[i];
                continue;
            }
            post[i] = post[i + 1] * nums[i];
        }
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++)
        {
            if(i == 0)
            {
                ans.push_back(post[i + 1]);
                continue;
            }
            if(i == nums.size() - 1)
            {
                ans.push_back(pre[i - 1]);
                continue;
            }
            ans.push_back(pre[i - 1] * post[i + 1]);
        }
        return ans;
    }
};