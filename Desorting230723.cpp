#include<bits/stdc++.h>

using namespace std;

int main()
{
	int testCase;
	cin >> testCase;
	while(testCase--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		bool sorted=true;
		for(int i = 0 ; i < n ;i++)
		{
			cin >> a[i];
			if(i!=0 and a[i]<a[i-1])
			{
				sorted = false;;
			}
		}
		if(!sorted){
			cout<<0<<endl;
		}
		else{
			int md=INT_MAX; // for storing minimum difference
			int i,j;
			for(int k = 0 ; k < n-1 ;k++)
			{
				if(a[k+1]-a[k]<md){
					md=a[k+1]-a[k];
					i = k;
					j = k+1;
				}
			}
			if(md==0)cout<<1<<endl;
			else {
				// int cnt=0;
				// while(a[i]<=a[j])
				// {
				// 	a[i]++;
				// 	a[j]--;
				// 	cnt++;
				// }
				// cout<<cnt<<endl;
				if((a[i]+a[j])&1)
				{
					cout<< a[j] - (a[i]+a[j])/2 <<endl;
				}
				else{
					cout<< a[j] - (a[i]+a[j])/2 + 1<<endl;
				}
			}

		}

	}
}