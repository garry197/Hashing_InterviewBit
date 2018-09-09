vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    
    int total=0;
    
    int wsize=B[0].size();
    vector<int> sol;
    if(A.size()==0||B.size()==0)
    return sol;
   total=wsize*B.size();
    
    unordered_map<string,int> map;
    
    for(int i=0;i<B.size();i++)
    {
        if(map.count(B[i])>0)
        map[B[i]]++;
        else
        map[B[i]]=1;
    }
    
    
    int i=0;
    while((i+total-1)<A.size())
    {
        unordered_map<string,int> map1;
        int t=0;
        while(t<A.size())
        {
        string sub=A.substr(i+t*wsize,wsize);
        if(map.find(sub)==map.end())
        break;
        else
        {
            if(map1.find(sub)==map1.end())
            {
                map1[sub]=1;
            }
            else 
            map1[sub]++;
            
            if(map1[sub]>map[sub])
            {
                break;
                
            }
            t++;
        }
        if(t==B.size())
        sol.push_back(i);
        }
        i++;
        
    }
    return sol;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
