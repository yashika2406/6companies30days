// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string>> solution;
        vector<string> ptr;
        for(int i=0;i<string_list.size();i++)
        {
            if(solution.size()==0)
            {
                ptr.push_back(string_list[i]);
                solution.push_back(ptr);
                ptr.clear();
            }
            else
            {
                int j;
                for(j=0;j<solution.size();j++)
                {
                    if(solution[j][0].size()==string_list[i].size())
                    {
                        string str1,str2;
                        str1 = solution[j][0];
                        str2 = string_list[i];
                        sort(str1.begin(),str1.end());
                        sort(str2.begin(),str2.end());
                        if(str1==str2)
                        {
                            for(int k=0;k<solution[j].size();k++)
                            {
                                ptr.push_back(solution[j][k]);
                            }
                            ptr.push_back(string_list[i]);
                            solution[j].swap(ptr);
                            ptr.clear();
                            break;
                        }
                    }
                }
                if(j==solution.size())
                {
                    ptr.push_back(string_list[i]);
                    solution.push_back(ptr);
                    ptr.clear();
                }
                
            }
        }
        return solution;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
