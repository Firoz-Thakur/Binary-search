https://practice.geeksforgeeks.org/problems/ceil-the-floor/0#

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int f(long long int ar[],long long int n,long long x)
{
    long long int ans=-1;
    
    
    long long int i=0;
    long long int j=n-1;
    while(i<=j)
    {
        long long int mid=(i+j)/2;
        
        if(ar[mid]==x)
        {
            return ar[mid];
        }
        else if(ar[mid]>x)
        {
            j=mid-1;
        }
        else
        {
            ans=ar[mid];
            i=mid+1;
        }
        
    }
    return ans;
}




long long int u(long long int ar[],long long int n,long long x)
{
    long long int ans=-1;
    
    
    long long int i=0;
    long long int j=n-1;
    while(i<=j)
    {
        long long int mid=(i+j)/2;
        
        if(ar[mid]==x)
        {
            return ar[mid];
        }
        else if(ar[mid]>x)
        {
            j=mid-1;
            ans=ar[mid];
        }
        else
        {
            //ans=mid;
            i=mid+1;
        }
        
    }
    return ans;
}









int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,x;
	    cin>>n>>x;
	    long long int ar[n];
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    sort(ar,ar+n);
	    
	    long long int l=f(ar,n,x);
	    long long int h=u(ar,n,x);
	    
	    if(l==-1)
	    {
	        cout<<"Floor doesn't exist"<<endl;
	    }
	    else
	    {
	          cout<<l<<endl;
	    }
	    
	     if(h==-1)
	    {
	        cout<<"Ceil doesn't exist"<<endl;
	    }
	    else
	    {
	          cout<<h<<endl;
	    }
	    
	    
	}
	
	
	
	return 0;
}
