#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(string &s, int i, int j){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
        int maxx = 0;
        int startIndex = 0;
        for(int i = 0; i < s.size(); i++)
        {
            for(int j = i; j < s.size(); j++)
            {
                if(check(s, i, j)){
                    if(maxx<=(j-i+1)){
                        maxx = j-i+1;
                        startIndex = i;
                    }
                }

            }
        }
        return s.substr(startIndex, maxx);
    }
};