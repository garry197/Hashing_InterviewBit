

vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    unordered_map<string,vector<int>> map;

    int n=A.size();
    int count=0;
    vector<vector<int>>v;
    for(int i=0;i<A.size();i++)
    {
        string rev=A[i];
        sort(rev.begin(),rev.end());
     //   cout<<rev<<rev.size()<<"  ";
        map[rev].push_back(i+1);
    }
    auto it=map.begin();
    while(it!=map.end())
    {
        v.push_back(it->second);
        it++;
    }
    return v;   
        
        
    }
    
    
    
    
    
    

