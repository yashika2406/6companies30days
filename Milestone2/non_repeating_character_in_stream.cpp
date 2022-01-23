// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    string sol;
		    int n = A.size();
		    int arr[26] = {0};
		    string uniq;
		    sol.push_back(A[0]);
		    arr[A[0]-'a']++;
		    uniq.push_back(A[0]);
		    for(int i=1;i<n;i++)
		    {
		        int val = A[i]-'a';
		        if(arr[val]==0)
		        {
		            arr[val]++;
		            uniq.push_back(A[i]);
		          //  sol.push_back(uniq.front());
		        }
		        else
		        {
		            arr[val]++;
		        }
		        val = uniq.front() - 'a';
		        while(!uniq.empty() && arr[val] != 1){
		            uniq.erase(uniq.begin());
		            val = uniq.front() - 'a';
		        }
		        if(uniq.empty())
		            sol.push_back('#');
		        else
		            sol.push_back(uniq.front());
		            
		    }
		    return sol;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
