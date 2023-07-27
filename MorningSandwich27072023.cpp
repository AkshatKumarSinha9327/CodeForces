#include<bits/stdc++.h>
using namespace std;

int main()
{
	int testCase;
	cin >> testCase;
	while(testCase--)
	{
		int bread, cheese, ham;
		cin >> bread >> cheese >> ham;
		int fill = cheese + ham;
		int b = bread + bread-1;
		int f = fill + fill+1;
		cout<<min(b,f)<<endl;
	}
}