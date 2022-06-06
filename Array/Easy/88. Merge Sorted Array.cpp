class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int s = n+m-1;
        n--;m--;
        while(s>=0){
            if(n<0) num1[s] = num1[m--];
            else if(m < 0) num1[s] = num2[n--];
            else if(num1[m] > num2[n]) num1[s] = num1[m--];
            else num1[s] = num2[n--];
            s--;
        }
    }
};
