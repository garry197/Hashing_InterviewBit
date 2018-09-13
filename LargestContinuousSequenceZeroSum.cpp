vector<int> Solution::lszero(vector<int> &A) {
    vector<int > ans;
 
    if(A.size()<2)
    return ans;
    unordered_map<int,vector<int>> map;
    int sum=0;
    int arr[A.size()+1];
    map[0].push_back(-1);
    for(int i=0;i<A.size()+1;i++)
    {
        sum=sum+A[i];
        arr[i]=sum;
        
        
        map[sum].push_back(i);
     
    }

    
    
    for(int i=0;i<A.size()+1;i++)
    {
        int previosindex;
        
        sum=arr[i];
        int xpt=0,ypt=0;
        if(map[sum].size()<2)
        continue;
        
        int y=map[sum].size();
        ypt=map[sum][y-1];
        
        xpt=map[sum][0];
       
        if((ypt-xpt)>ans.size())
        {
            ans.clear();
             xpt++;
            while(xpt<=ypt)
        {
            if(A[xpt]!=0)
            {ans.push_back(A[xpt]);}
         xpt++;
            
        }
        
        }

        
    }
    return ans;
    
}
