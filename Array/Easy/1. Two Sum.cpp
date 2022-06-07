class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int> mp;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(mp.count(target - nums[i]) != 0) return {mp[target - nums[i]] , i};
            mp[nums[i]] = i;
        }
        return {};
    }
};
