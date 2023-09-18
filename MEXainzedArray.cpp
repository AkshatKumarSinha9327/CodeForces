#include<bits/stdc++.h>

using namespace std;

int main()
{
	int testCase;
	cin >> testCase;
	while(testCase--)
	{
		int n,k,x;
		cin >> n >> k >> x;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			if(i<k and i<x)arr[i]=i;
			else if(i<x)
			{
				arr[i]=x;
			}
			else if(i>=x and k==x)arr[i]=x-1;
			else if(i>=x)arr[i]=x;
		}
		// for(int x:arr)cout<<x<<" ";
		int mex=-1;
		for(int i =0 ; i < n;i++)
		{
			if(i!=arr[i])
			{
				mex = i;
				break;
			}
		}
		if(mex==-1 and k==n)
			cout<<accumulate(arr,arr+n,0);
		else if(mex==k)
		{
			cout<<accumulate(arr,arr+n,0);
		}
		else cout<<-1;
		cout<<endl;
	}
}