// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    // int factorial(int n)
    // {
    //     // single line to find factorial
    //     return (n==1 || n==0) ? 1: n * factorial(n - 1);
    // }
    
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(n==1)
        {
            if(a[0]<k)
            return 1;
            return 0;
        }
        long long subarr=1;
        int i=0,j=0;
        int sum=0;
        while(j<n)
        {
            subarr*=a[j];
            while(subarr>=k && i<=j)
            {
                subarr /= a[i];
                i++;
            }
            
            sum += j-i+1;
            j++;
        }
        return sum;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
