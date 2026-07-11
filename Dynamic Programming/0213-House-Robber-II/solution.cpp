class Solution {
public:
    int f(vector<int>& num) {
        int n = num.size();
        vector<int> dp(n,-1);
        dp[0] = num[0];
        for (int i=1; i<n; i++) {
            int take = num[i];
            if (i>1) take += dp[i-2];
            int notTake = dp[i-1];
            dp[i] = max(take, notTake);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp1, temp2;
        if (n==1) return nums[0];
        for (int i=0; i<n; i++) {
            if (i != 0) temp1.push_back(nums[i]);
            if (i!=n-1) temp2.push_back(nums[i]);
        }
        return max(f(temp1), f(temp2));
    }
};
