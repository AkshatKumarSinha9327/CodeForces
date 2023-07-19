#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int x = n % 4;
	if(x==3 || x==0){
		cout<<0;
	}else cout<<1;
}