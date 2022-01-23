// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        int x[4],y[4];
        x[0] = L2[0];
        x[1] = R2[0];
        x[2] = R2[0];
        x[3] = L2[0];
        y[0] = R2[1];
        y[1] = R2[1];
        y[2] = L2[1];
        y[3] = L2[1];
        for(int i=0;i<4;i++)
        {
            if(L1[0]<=x[i] && R1[0]>=x[i] && L1[1]>=y[i] && R1[1]<=y[i])
                return 1;
        }
        x[0] = L1[0];
        x[1] = R1[0];
        x[2] = R1[0];
        x[3] = L1[0];
        y[0] = R1[1];
        y[1] = R1[1];
        y[2] = L1[1];
        y[3] = L1[1];
        for(int i=0;i<4;i++)
        {
            if(L2[0]<=x[i] && R2[0]>=x[i] && L2[1]>=y[i] && R2[1]<=y[i])
                return 1;
        }
        if(L2[0]<=L1[0] && R2[0]>=R1[0] && L2[1]<=L1[1] && R2[1]>=R1[1])
            return 1;
        if(L2[0]>=L1[0] && R2[0]<=R1[0] && L2[1]>=L1[1] && R2[1]<=R1[1])
            return 1;
        return 0;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}  // } Driver Code Ends
