#include<bits/stdc++.h>

using namespace std;

int main()
{
	int testCase;
	cin >> testCase;
	while(testCase--)
	{
		int number;
		cin >> number;
		vector<pair<char,char>> dp;
		string s;
		cin >> s;
		for(int i = 0 ; i < number-1;i++)
		{
			bool flag=false;
			for(int j = 0 ; j < dp.size() ;j++)
			{
				if(dp[j].first==s[i] and dp[j].second==s[i+1])
				{
					flag=true;
					break;
				}
			}
			// cout<<flag<<" flag" << endl;
			if(!flag)
			{
				dp.push_back({s[i],s[i+1]});
			}
			// for(int j = 0 ;  j < dp.size() ; j++)cout<<dp[j].first<<" "<<dp[j].second<<" ";
			// cout<<endl;
		}
		cout<<dp.size()<<endl;

	}
	return 0;
}
