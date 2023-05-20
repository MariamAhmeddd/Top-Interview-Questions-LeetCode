#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        set<int>s;
        for (int i = 0; i < nums.size(); ++i) {
            s.insert(nums[i]);
        }
        vector<int>tmp;
        for(auto e:s)
        {
            tmp.push_back(e);
        }
        int cnt = 1;
        int ans = 0;
        for (int i = 0; i < tmp.size() - 1; ++i) {
            if(tmp[i]+1==tmp[i+1])
            {
                cnt++;
            }
            else
            {
                ans = max(ans,cnt);
                cnt = 1;
            }
        }
        if(cnt)
        {
            ans = max(ans,cnt);
        }
        return ans;
    }
};