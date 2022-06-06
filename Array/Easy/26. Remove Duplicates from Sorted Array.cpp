class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = 0 , prevNum = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] != prevNum) {
                nums[s++] = nums[i];
                prevNum = nums[i];
            }
        }
        
        return s;
    }
};
