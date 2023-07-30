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
		int cnt=0;
		for(int i = 0 ; i < n ;i++)
		{
			int a;
			cin >> a;
			if(i+1 == a)cnt++;
		}
		cout<<ceil(cnt/2.0)<<endl;
	}
}