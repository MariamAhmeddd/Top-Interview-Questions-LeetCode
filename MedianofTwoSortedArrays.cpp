class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>tmp;
        for(int i = 0; i < nums1.size(); i++)
        {
            tmp.push_back(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++)
        {
            tmp.push_back(nums2[i]);
        }
        sort(tmp.begin(),tmp.end());
        int cnt = 1;
        int sz = tmp.size();
        bool f = false;
        if(sz%2)
        {
            f = true;
            sz++;
        }
        double ans = 0;
        for(auto e : tmp)
        {
            if(ans)
            {
                ans+=e;
                break;
            }
            if(cnt == sz / 2)
            {
                ans+=e;
                if(f)
                {
                    break;
                }
            }
            cnt++;
        }
        if(!f)
        {
            ans/=2;
        }
        return ans;
    }
};