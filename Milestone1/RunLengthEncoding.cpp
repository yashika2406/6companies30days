// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  int n = src.size();
  string sol;
  sol.push_back(src[0]);
  int count=1;
  for(int i=1;i<n;i++)
  {
    if(src[i]==src[i-1])
        count++;
    else
    {
        char c = '0' + count;
        sol.push_back(c);
        count=1;
        sol.push_back(src[i]);
    }
  }
  char c = '0' + count;
  sol.push_back(c);
  return sol;
}     
 

