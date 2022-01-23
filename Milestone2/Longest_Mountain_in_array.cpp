class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size()<3)
            return 0;
        int n = arr.size();
        int count=0;
        int len=0;
        int len1=0;
        for(int i=1;i<n;i++)
        {
            // cout << count << " " << len << " " << len1 << endl;
            if(len==0){
                while(i<n && arr[i]<=arr[i-1])
                    i++;
                if(i<n)
                {
                    count=1;
                    len=2;
                }
            }
            else
            {
                if(count==1)
                {
                    if(arr[i]>arr[i-1])
                    {
                        len++;
                    }
                    else if(arr[i]<arr[i-1])
                    {
                        count=2;
                        len++;
                    }
                    else
                        len=0;
                }
                else if(count==2)
                {
                    if(arr[i]<arr[i-1])
                        len++;
                    else if(arr[i]>arr[i-1])
                    {
                        if(len1 < len)
                            len1 = len;
                        len=2;
                        count=1;
                    }
                    else
                    {
                        if(len1 < len)
                            len1 = len;
                        len=0;
                        count=1;
                    }
                }
            }
        }
        // cout << len1 << endl;
        if(count==1)
        {
            len=0;
        }
        else if(count==2)
        {
            if(len > len1)
                len1 = len;
        }
        return len1;
    }
};
