#include<bits/stdc++.h>

using namespace std;

const int N=1e7+10;
int hsh[N];
int unq[N];
int main()
{
    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        hsh[arr[i]]++;
    }
    int s =0,cnt=0 ;
    for(int i=0;i<n;i++)
    {
        if (arr[i]==hsh[arr[i]])
        {
        	// cout<<arr[i]<<endl;
        	if(unq[arr[i]]==0)
        	{
        		unq[arr[i]]=1;f
        		s+=arr[i];
            	cnt++;
        	}
        }
    }
    cout<<fixed<<setprecision(2)<<(s*1.0)/cnt;
}