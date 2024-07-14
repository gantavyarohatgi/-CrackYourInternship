class Solution {
public:
    int solve(vector<int>& nums, int curr, int prev, vector<vector<int>> &dp) {
        //base case
        if(curr == nums.size())
        return 0;

        if(dp[curr][prev+1] != -1)
        return dp[curr][prev+1];

        //computation
        //inclusion
        int inclusion = 0;
        if(curr==0 ||  prev==-1 ||(nums[curr]>nums[prev]))
        {
            inclusion = 1 + solve(nums,curr+1,curr,dp);
        }

        //exclusion
        int exclusion = 0 + solve(nums,curr+1,prev,dp);

        return dp[curr][prev+1] = max(inclusion,exclusion);
        
    }

    int lengthOfLIS(vector<int>& nums) {
        int curr = 0;
        int prev = -1;
        vector<vector<int>> dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return solve(nums,curr,prev,dp);
    }
};