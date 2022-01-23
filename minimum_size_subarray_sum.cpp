class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        int j=0;
        int maxlen=INT_MAX;
        int i=0;
        while(i<n)
        {
            sum += nums[i];
            i++;
            while(sum>=target)
            {
                // cout << sum << endl;
                if(maxlen > (i-j))
                {
                    maxlen = (i-j);
                }
                sum -= nums[j];
                j++;
            }
        }
        if(maxlen == INT_MAX)
            return 0;
        return maxlen;
    }
};
