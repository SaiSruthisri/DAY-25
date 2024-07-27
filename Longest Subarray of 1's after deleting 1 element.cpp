class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n =nums.size();
        vector<int>v;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                if(count!=0)
                {
                   v.push_back(count);
                   count=0;
                }
                v.push_back(0);

            }
            else
            {
                count++;
            }
        }
        v.push_back(count);

        int k=v.size();
        int maxi=0;
        int ans=0;
        for(int i=0;i<k;i++)
        {
            if(v[i]!=0 && i+2<k)
            {
                ans=v[i]+v[i+2];
                maxi= max(maxi, ans);
            }
            else
            {
                ans=v[i];
                maxi= max(maxi, ans);
            }
        }
        if(k==1)
        {
            maxi=v[0]-1;
        }
        return maxi;
    }
};
