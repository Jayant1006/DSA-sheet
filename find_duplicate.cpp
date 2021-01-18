#include<bits/stdc++.h>
using namespace std;
int find_dup(int nums[],int n)
{
	int slow=nums[0];
	int fast=nums[0];
	
	//Using the tortoise method for getting O(n)
	//Other methods: by sorting if n and n+1 are equal then print the value : O(nlogn)
	do{
		slow=nums[slow];
		fast=nums[nums[fast]];
	}while(slow!=fast);
	
	fast=nums[0];
	while(slow!=fast)
	{
		slow=nums[slow];
		fast=nums[fast];
	}
	//we can return either slow or fast
	return slow;
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
	cout<<find_dup(a,n)<<endl;
}
