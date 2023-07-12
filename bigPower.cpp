#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
    long long power(int n,int r)
    {
       //Your code here
       if(r==1) return n;
       if(r==0) return 1;
       long long temp=power(n,r/2)%mod;
       temp=(temp*temp)%mod;
       if(r%2==1)temp=(temp*n)%mod;
       return temp;
        
    }
int main()
{
	// here we will write the function to find a^b in log(a) time constraint are 1<a,b<1e9;
	int a,b;
	cin>>a>>b;
	return power(a,b);
}
