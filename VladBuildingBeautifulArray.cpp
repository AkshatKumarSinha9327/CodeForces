#include<bits/stdc++.h>

using namespace std;


int main()
{
	int testCase;
	cin >> testCase;
	while(testCase--)
	{
		int number;
		cin >> number ;
		vector<int> a(number);
		int ec=0;
		for(int i = 0 ; i < number ;i++)
		{
			cin >> a[i];
			if(a[i]%2==0)
				ec++;
		}
		sort(a.begin(),a.end());
		if(a[0]==-1 )cout<<"NO"<<endl;
		else if(a[0]%2==1)cout<<"YES"<<endl;
		else if(number==ec){cout<<"YES"<<endl;}
		else cout<<"NO"<<endl;
	}
	return 0;
}
