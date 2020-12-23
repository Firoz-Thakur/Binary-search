http://discuss.codingblocks.com/t/kth-root-you-are-given-two-integers-n-and-k-find-the-greatest-integer-x-such-that-x-k-n/919

You are given two integers n and k. Find the greatest integer x, such that, x^k <= n.

Input Format
First line contains number of test cases, T. Next T lines contains integers, n and k.

Constraints
1<=T<=10
1<=N<=10^15
1<=K<=10^4

Output Format
Output the integer x

Sample Input
2
10000 1
1000000000000000 10
Sample Output
10000
31
Explanation
For the first test case, for x=10000, 10000^1=10000=n





#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool answer(ll n,ll mid,ll k)
{
	if(pow(mid,k)<=n)
	{
		return true;
	}
	return false;

}

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll s=0;
		ll e=n;
		ll ans=-1;
		while(s<=e)
		{
			ll mid=(s+e)/2;
			if(answer(n,mid,k))
			{
				ans=mid;
				s=mid+1;
			}
		  else
		  {
			  e=mid-1;
		  }
		}
		cout<<ans<<endl;
	}
	return 0;

}
