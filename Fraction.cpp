string Solution::fractionToDecimal(int a, int b) {
string s="";

long long int A=a;
long long int B=b;

if(A==0)
    return "0";

bool neg=false;

//cout<<"hello";

if(A<0)
{
    neg=true;
    A=0-A;
}


if(B<0)
{
    if(neg)
    {
        neg=false;
    }
    else
        neg=true;
    B=0-B;
}

//cout<<A<<B;

if(neg)
    s=s+"-";


if(A==B)
{
    s.append("1");
    return s;
}

if(A>B)
{
    s=s+to_string(A/B);
  
    A=A%B;
}
else
    s=s+"0";
    
    long long int rem=A%B;
if(rem==0)
{
    return s;
}


  s.append(".");

    unordered_map<int,int> m;
    
    string tmp="";
    while((rem!=0)&&(m.find(rem)==m.end()))
    {
        m[rem]=s.length();
        rem=rem*10;
        int k=rem/B;
        s=s+to_string(k);
        rem=rem%B;
    }
    if(rem!=0)
   { s.insert(m[rem],"(");
    s=s+")";}
    
    return s;
    
    
    
    
    
    
    
    
    
    
    
    
    
}
