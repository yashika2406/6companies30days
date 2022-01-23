// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isValid(vector<vector<int>> mat){
        int val;
        for(int i=0;i<9;i++)
        {
            int arr[10] = {0};
            for(int j=0;j<9;j++)
            {
                val = mat[i][j];
                if(arr[val] == 0)
                    arr[val]++;
                else if(arr[val] != 0 && val != 0)
                    return 0;
            }
        }
        for(int i=0;i<9;i++)
        {
            int arr[10] = {0};
            for(int j=0;j<9;j++)
            {
                val = mat[j][i];
                if(arr[val] == 0)
                    arr[val]++;
                else if(arr[val] != 0 && val != 0)
                    return 0;
            }
        }
        int p,q;
        for(int i=0;i<9;i=i+3)
        {
            for(int j=0;j<9;j=j+3)
            {
                int arr[10] = {0};
                p=i,q=j;
                while(q<(j+3))
                {
                    p=i;
                    while(p<(i+3))
                    {
                        val = mat[q][p];
                        if(arr[val] == 0)
                            arr[val]++;
                        else if(arr[val] != 0 && val != 0)
                            return 0;
                        p++;
                    }
                    q++;
                }
            }
            
        }
        return 1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
