#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        vector<int>ans;
        while(left<=right)
        {
            int hi = min(height[left],height[right]);
            int wi = right - left;
            ans.push_back(hi*wi);
            if(height[left]<=height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        sort(ans.begin(),ans.end());
        return ans.back();
    }
};