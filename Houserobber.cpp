 int rob(vector<int>& nums)
    {
        int n=nums.size();
        vector<int>dp;
        dp.push_back(nums[0]);
        if(n>1)
            dp.push_back(max(nums[0],nums[1]));
        for(int i=2;i<n;i++)
            dp.push_back(max(dp[i-1],nums[i]+dp[i-2]));
        return dp[n-1];
    }
