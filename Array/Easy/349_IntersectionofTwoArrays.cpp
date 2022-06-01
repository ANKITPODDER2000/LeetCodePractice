class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        /*
        // TC : O(n * log(n)) SC : O(1)
        vector<int> ans;
        sort(nums1.begin() , nums1.end()); 
        sort(nums2.begin() , nums2.end());
        int i = 0 , j = 0 , n1 = nums1.size() , n2 = nums2.size() , k = -1;
        while(i < n1 && j < n2){
            if(nums1[i] == nums2[j]){
                if(k == -1 || ans[k] != nums1[i]){
                    ans.push_back(nums1[i]);
                    k++;
                }
                i++;j++;
            }
            else if(nums1[i] > nums2[j]) j++;
            else i++;
        }
        return ans;
        */
        
        // TC : O(n) SC : O(n)
        map<int,int> mp;
        for(auto it : nums1) mp[it] = 1;
        vector<int> ans;
        for(auto it : nums2){
            if(mp[it] == 1){
                ans.push_back(it);
                mp[it]--;
            }
        }
        return ans;
    }
};
