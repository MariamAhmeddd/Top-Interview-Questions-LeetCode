#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        deque<char> tmp;
        int maxx = 0;
        if(s.empty())return 0;
        for (int i = 0; i < s.size(); ++i) {
            if(count(tmp.begin(), tmp.end(),s[i]))
            {
                maxx = max(maxx,(int)tmp.size());
                while(true)
                {
                    if(tmp.front()==s[i])
                    {
                        tmp.pop_front();
                        break;
                    }
                    else
                    {
                        tmp.pop_front();
                    }
                }
                tmp.push_back(s[i]);
            }
            else
            {
                tmp.push_back(s[i]);
            }
        }
        maxx = max((int)tmp.size(),maxx);
        if(!maxx)return s.size();
        return maxx;
    }
};
