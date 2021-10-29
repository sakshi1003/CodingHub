 int lengthOfLIS(vector<int>& nums) {
		//res stores the length of the longest sequence that ends at index i
		vector<int> res(nums.size(), 1);
        int ans=-1;
		//traverse the left side for each index to find the longest such subsequence
		//that exists on left side of current index, that the current number can be part of
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    res[i]=max(res[i], 1+res[j]);
                }
            }
            ans=max(res[i], ans);
        }
        return ans;
    }
