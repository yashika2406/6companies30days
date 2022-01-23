// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int arr[k]={0};
        for(int i=0;i<nums.size();i++)
        {
            int val = nums[i]%k;
            arr[val]++;
        }
        if(k%2==0)
        {
            if(arr[0]%2!=0)
                return false;
            for(int i=1;i<k/2;i++)
            {
                if(arr[i]!=arr[k-i])
                    return false;
            }
            if(arr[k/2]%2!=0)
                return false;
        }
        else
        {
            if(arr[0]%2!=0)
                return false;
            for(int i=1;i<=k/2;i++)
            {
                if(arr[i]!=arr[k-i])
                    return false;
            }
        }
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends
