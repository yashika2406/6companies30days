// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        sort(contact,contact+n);
        for(int i=1;i<n;i++)
        {
            if(contact[i-1] == contact[i])
            {
                contact[i-1] = contact[n-1];
                sort(contact,contact+n-1);
                n--;
            }
        }
        vector<vector<string>> sol;
        vector<string> semisol;
        int len = s.size();
        string p = "";
        char ch[len+1];
        for(int i=0;i<len;i++)
        {
            p.push_back(s[i]);
            int j=0;
            int count=0;
            for(j=0;j<n;j++)
            {
                memset(ch,0,len+1);
                // char ch[i+1];
                contact[j].copy(ch,i+1,0);
                if(ch == p)
                {
                    // cout << p << j << endl;
                    semisol.push_back(contact[j]);
                    count++;
                }
            }
            if(count==0)
                semisol.push_back("0");
            sol.push_back(semisol);
            semisol.clear();
            count=0;
        }
        return sol;
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends
