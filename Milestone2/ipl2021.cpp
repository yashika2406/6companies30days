// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        int sum=0;
        vector<int> sol;
        vector<int> subarr;
        for(int i=0;i<k;i++)
        {
            while(!subarr.empty() && arr[i]>=arr[subarr.back()])
                subarr.pop_back();
            subarr.push_back(i);
        }
        sol.push_back(arr[subarr.front()]);
        for(int i=k;i<n;i++)
        {
            while(!subarr.empty() && subarr.front()<=i-k)
                subarr.erase(subarr.begin());
            while(!subarr.empty() && arr[i]>=arr[subarr.back()])
                subarr.pop_back();
            subarr.push_back(i);
            sol.push_back(arr[subarr.front()]);
        }
        return sol;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends
