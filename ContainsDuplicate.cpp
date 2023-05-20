#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>s;
        for(auto e:nums)
        {
            s.insert(e);
        }
        if(s.size()==nums.size())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};