// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    long long arr[n];
	    int two=0,three=0,five=0;
	    arr[0] = 1;
	    for(int i=1;i<n;i++)
	    {
	        arr[i]=min(2*arr[two],min(3*arr[three],5*arr[five]));
	        if(arr[i]==2*arr[two])
	            two++;
	        if(arr[i]==3*arr[three])
	            three++;
	        if(arr[i]==5*arr[five])
	            five++;
	       // cout << arr[i] << endl;
	    }
	    return arr[n-1];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
