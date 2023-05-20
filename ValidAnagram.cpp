#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>freq;
        if(s.size()!=t.size())return false;
        for (int i = 0; i < s.size(); ++i) {
            freq[s[i]]++;
        }
        for (int i = 0; i < t.size(); ++i) {
            if(freq[t[i]])
            {
                freq[t[i]]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};