class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) {
        int ans = 0 , n = t.size();
        for(int i = 0 ; i < n-1 ; i++){
            int e = t[i]+d-1;
            if(e<t[i+1]) ans += d;
            else ans += (t[i+1] - t[i]);
        }
        ans += d;
        
        return ans;
    }
};
