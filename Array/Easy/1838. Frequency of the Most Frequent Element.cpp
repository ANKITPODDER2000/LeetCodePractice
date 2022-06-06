class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        int n = nums.size(), i = n-1 , j = n-2 , ans = 1;
        while(i>0){
            int curVal = nums[i];
            while(j >= 0 && curVal-nums[j] <= k){
                k -= (curVal-nums[j]);
                j--;
            }
            int extraAddedVal = i-j-1;
            ans = max(ans , extraAddedVal+1);
            i--;
            
            if(i > 0) k += ((curVal - nums[i]) * extraAddedVal);
        }
        
        return ans;
    }
};

/*
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long int i=0,sum=0,res=0;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            while(sum+k<nums[j]*(j-i+1)){
                sum-=nums[i++];
            }
            res=max(res,j-i+1);
        }
        return res;
    }
};
*/
