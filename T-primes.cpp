#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const long long int N = 1e7+10;
vector<bool> isprime(N,1);
int main(){
	isprime[0] = isprime[1]=false;
	vector<int> primes;


	unordered_map<ll,ll> mp;
	for(ll i =2;i < N;i++)
	{
		if(isprime[i]){
			primes.push_back(i);
			for(ll j = 2*i;j<N;j+=i)
			{
				isprime[j]=false;
			}
			mp[i*i]=2;
		}
	}




	int n;
	cin >> n;
	while(n--)
	{
		ll a;
		cin >>a ;
		if(mp[a]==2)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}