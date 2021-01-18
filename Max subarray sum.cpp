#include<bits/stdc++.h>
using namespace std;
int kadane_algo(int a[],int n)
{
	int maxi=a[0];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		maxi=max(maxi,sum);
		if(sum<0) sum=0;
	}
	return maxi;
}
int main()
{
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<kadane_algo(a,n)<<endl;
}
