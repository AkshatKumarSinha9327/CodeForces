#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
/*
logic 

rect  stick = 2(l+b)
	  stick/2  = l+b

*/

int main()
{
	ll n;
	cin>>n;

	if (n%2==1){cout<<0<<endl;return 0;}
	n = n/2;
	if (n%2==1)cout<<n/2<<endl;
	else cout<<n/2-1<<endl;
	return 0;
}