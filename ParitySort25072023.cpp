#include<bits/stdc++.H>
using namespace std;

int main()
{
	int testCase;
	cin >>testCase;
	while(testCase--)
	{
		int n;
		cin >> n;
		vector<int> arr(n), s(n);
		for(int i= 0;i<n;i++){
			cin>>arr[i];
			s[i]=arr[i];
		}
		sort(s.begin(),s.end());
		bool flag=true;
		for(int i = 0 ; i < n;i++)
		{
			if(arr[i]%2!=s[i]%2)
			{
				flag=false;
				break;
			}
		}
		if(flag)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}