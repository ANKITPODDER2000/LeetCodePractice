class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if(nums[0] >= target) return 0;
        else if(nums[n-1] == target) return n-1;
        else if(nums[n-1] < target) return n;
        
        int i = 1, j = n-1;
        
        while( i <= j){
            int mid = (i + j) / 2;
            if(nums[mid]==target || (nums[mid-1] < target && target < nums[mid])) return mid;
            else if(nums[mid] < target) i = mid + 1;
            else j = mid - 1;
        }
        
        return -1;
    }
};
