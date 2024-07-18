class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int cnt = 0;
        if(n > 0)
        {
            for(int i = m; i < (n+m); i++)
            {
                nums1[i] = nums2[cnt];
                cnt++;
            }
        }

        sort(nums1.begin(),nums1.end());
        for(int i=0;i<nums1.size();i++)
        {
            cout<<nums1[i]<<" ";
        }
    }
};
