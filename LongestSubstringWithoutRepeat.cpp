int Solution::lengthOfLongestSubstring(string A) {
    unordered_map<int,int> m;
    
    
    int n=A.size();
     int i=0;
    int maxi=0;
    int ans=0;
    int del=0;
    while(i<n)
    {
        int c=int(A[i]);
            if(m[c]==1)
            {
                while(A[del]!=A[i])
                {
                    m.erase(A[del]);
                    maxi--;
                    del++;
                }
                    m.erase(A[del]);
                    del++;
                    maxi--;
            }maxi++;
            m[c]=1;
     ans=max(maxi,ans);
        i++;
    }
    ans=max(ans,maxi);
    return ans;   
}
