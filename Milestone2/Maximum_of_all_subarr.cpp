// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        int sum=0;
        vector<int> sol;
        vector<int> subarr;
        for(int i=0;i<k;i++)
        {
            subarr.push_back(arr[i]);
        }
        int val = *max_element(subarr.begin(), subarr.end());
        sol.push_back(val);
        int j=0;
        for(int i=k;i<n;i++)
        {
            int top = subarr.front();
            subarr.erase(subarr.begin());
            subarr.push_back(arr[i]);
            if(top==val)
                val = *max_element(subarr.begin(), subarr.end());
            else
                val = max(arr[i],val);
            sol.push_back(val);
        }
        return sol;
        // your code here
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
