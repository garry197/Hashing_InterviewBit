int Solution::colorful(int A) {
    
    unordered_map<int,int> m;
    int tmp=A;
  
    vector<int> V;
    while(tmp>0)
    {
        V.push_back(tmp%10);
        tmp=tmp/10;
        
    }
   
    int i=V.size()-1;
    int count=i;
    while(i>-1)
    {
       
        int sum=1;
        for(;i>-1;i--)
    {
        sum=sum*V[i];
        if(m[sum]==1)
        return 0;
        else
        m[sum]=1;
        
    }
    count--;
    i=count;
    
    }
    
    return 1;
}
