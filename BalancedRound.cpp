#include<bits/stdc++.h>


using namespace std;

typedef long long ll;
const int N = 1e9+7;
const ll M= 1e18+7;
void bubbleSortArr(vector<int>arr,int  n)
{
    for(int i =0 ; i < n-2  ;i++)
    {
        for(int j = 0 ; j < n - i -1 ;j++)
        {
            if(arr[j] >arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=tmp;
            }
        }
        for(int x: arr)
        {
            cout<<x <<" ";
        }
        cout<<endl;

    }
}


ll binaryExponentiationRecur(ll a, ll b)
{
    if(b==0)
    {
        return 1;
    }
    ll res = binaryExponentiationRecur(a,b/2);
    if(b&1){
        return (a*((res*res) % N))%N;
    }
    return (res*res)%N;
}


ll binaryExponentiationIterative(ll a, ll b)
{
    ll ans =1;
    while(b)
    {
        if(b&1){
            ans = ans*a;
        }
        a*=a;
        b>>=1;
    }
    return ans;
}

// when both the integer becomes large
// binary exponentiation


ll binaryMultiplication(ll a, ll b)
{
    ll ans=0;
    while(b)
    {
        if(b&1){
            ans = (ans +a)%M;
        }
        a = (a+a)%M;
        b>>1;
    }
    return ans;
}


ll LargeExponentiationA(ll a, ll b)
{
    ll ans =1;
    while(b)
    {
        if(b&1){
            ans = binaryMultiplication(ans,a);
        }
        a = binaryMultiplication(a,a);
        b>>=1;
    }
    return ans;
}


void execute_my_code()
{
    ll n,k;
    cin >> n >> k;
    // cout<<n<<" "<<k<<endl;
   
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        // cout<<arr[i]<<" ";
    }
    // cout<<endl;
     if(n==1)
        {
            cout<<0<<endl;return;
        }
    sort(arr.begin(),arr.end());
    int mx=0;
    int ct=0;
    for(int i = 0 ; i < n-1;i++)
    {
        if((arr[i+1]-arr[i])<=k)
        {
            ct++;
        }
        else{
            ct++;
            mx = max(ct,mx);
            ct=0;
        }
    }
    // cout<<mx<<" before "<<ct<<endl;
    if((arr[n-1]-arr[n-2])<=k)
    {
        ct++;
        mx = max(ct,mx);
    }
    cout<<n-mx<<endl;
}


int main()
{
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        // cout<<testCase<<endl;
        execute_my_code();
    }
}
