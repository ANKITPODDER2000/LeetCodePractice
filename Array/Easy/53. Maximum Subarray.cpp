class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = 0;
        int maxVal = INT_MIN;
        for(auto it : nums){
            ans += it;
            maxVal = max(maxVal , ans);
            if(ans <= 0) ans = 0;
        }
        return maxVal;
    }
};
