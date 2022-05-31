class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size() == 0) {
            return vector<string>();
        }
        int s = 0;
        vector<string> ans;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] != nums[i-1]+1) {
                if(i-1 == s) ans.push_back(to_string(nums[s]));
                else ans.push_back(to_string(nums[s]) +"->"+to_string(nums[i-1]));
                s = i;
            }
        }
        
        int n = nums.size()-1;
        if(s == n) ans.push_back(to_string(nums[s]));
        else ans.push_back(to_string(nums[s]) +"->"+to_string(nums[n]));
        
        return ans;
    }
};
