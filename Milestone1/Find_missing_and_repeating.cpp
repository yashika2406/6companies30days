// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *ans = new int[2];
        int a[n+1] ={0};
        for(int i=0;i<n;i++)
        {
            if(a[arr[i]]==0)
            {
                a[arr[i]] = 1;
            }
            else
            {
                ans[0] = arr[i];
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]==0)
            {
                ans[1] = i;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
