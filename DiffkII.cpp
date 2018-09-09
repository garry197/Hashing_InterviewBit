int Solution::diffPossible(const vector<int> &A, int B) {
    if(A.size()<2)
    return 0;
    
    
    if(A.size()==2)
    {
        if(abs(A[0]-A[1]))
        return 1;
        else
        return 0;
    }
    unordered_map<int,int> m;
    for(int i=0;i<A.size();i++)
    m[A[i]]=i;
    for(int i=0;i<A.size();i++)
    {
        int j=A[i]-B;
        if(m.find(j)!=m.end())
        {
            if(m[j]!=i)
            return 1;
         }
        
    }
    return 0;
    
    
    
    
}
