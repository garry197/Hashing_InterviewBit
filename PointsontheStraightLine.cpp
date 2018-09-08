

int Solution::maxPoints(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

unordered_map<double, int> m;
int size1=A.size();
if(size1<1)
return 0;
int size2=B.size();
if(size1<2)
return 1;
int ans=0;
for(int i=0;i<size1-1;i++)
{
    int again=0;
    int ver=0;
    int maxi=0;
    for(int j=i+1;j<size1;j++)
    {
        if(A[i] == A[j]){
                if(B[i] == B[j]){
                    again++;
                }
                else{
                    ver++;
                }
        }
        else
        {
            double slope=0.0;
            double xpt=A[j]-A[i];
            double ypt=B[j]-B[i];
           
           // vector<int> v;
            if(ypt!=0)
             slope=(1.0*(ypt/xpt));
            cout<<slope<<" ";
            if(m.count(slope)>0)
            m[slope]++;
            else
            m[slope]=1;
           
            maxi=max(maxi,m[slope]);
            
        }
        maxi=max(maxi,ver);
        
        
    }
    ans=max(maxi+again+1,ans);
    m.clear();
    
    
}
    return ans;
    
    
    
    
    
    
    
}
