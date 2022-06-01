class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        // int n = nums.size() , m = 1;
        // vector<int> maxLength(n , 1);
        // for(int i = 1 ; i < n ; i++){
        //     for(int j = 0 ; j < i ; j++){
        //         if(nums[j] < nums[i]) maxLength[i] = max(maxLength[i] , maxLength[j]+1);
        //     }
        //     m = max(m , maxLength[i]);
        // }
        // return (m >= n-1);
        
        bool removed = false;
        int prev = nums[0] , n = nums.size();
        
        for(int i = 1 ; i < n ; i++){
            if(nums[i] <= prev){
                if(removed) return false;
                removed = true;
                if(i == 1 || nums[i] > nums[i-2]) prev = nums[i];
            }
            else prev = nums[i];
        }
        return true;
    }
};
