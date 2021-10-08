/*

Summary : DP with bitmask 
Bitmask  is nothing but using a (say) 32 bit number to store states of a dp
The bits which are set means that number has been used.



Approch 1: Generate all the permutations of the nums2 vector and find the answer.
Time complexity: O(n!)


Approach 2: Iterating on nums1 using a recursive function and xor it with (one by one recursively) all the nums2 numbers.

dp[i][j] =  nums1[0....i]
            j = bitmask representing which bit is enabled.
            
            Time Complexity : O(n * (2^n))
            
            2^n because each state is used only once for each [0..i]


*/

class Solution {
public:

    int dp[15][(1<<14)+1];
    
    int sol(vector<int>& nums1, vector<int>& nums2, int i, int bitmask){
        
        if(i == nums1.size()){
            return 0;
        }
        
        if(dp[i][bitmask]!=-1){
            return dp[i][bitmask];
        }
        
        int ans  = INT_MAX;
        
        for(int k=0; k<nums2.size(); k++){
            if((bitmask & (1<<k)) == 0){
               ans = min(ans,(nums1[i]^nums2[k]) + sol(nums1, nums2, i+1, bitmask|(1<<k)));
            }
      
        }
        
        return dp[i][bitmask] = ans;
    }
    int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {
        
        memset(dp, -1, sizeof(dp));
        
        return sol(nums1, nums2, 0,0);
    }
};
