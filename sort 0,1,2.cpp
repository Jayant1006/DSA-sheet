#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}    
}

void method_2(int nums[],int n)
{
    int start=0;
    int mid=0;
    int end=n-1;
        
    while(mid<=end)
    {
        switch(nums[mid]){
            case 0:
                swap(nums[start++],nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid],nums[end]);
                end--;
                break;
        }
    }
    print(nums,n);    
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
	method_2(a,n);
}
