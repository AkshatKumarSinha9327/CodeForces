#include<bits/stdc++.h>

using namespace std;

int main(){
    int TestCasel;
    cin >> TestCasel;
    while(TestCasel--){
        int fnum1,fnum2,fnum3;
        cin >> fnum1>>fnum2>>fnum3;
        if(((fnum1+fnum2)>=10)){cout<<"YES"<<endl;}
        else if((fnum1+fnum3)>=10){cout<<"YES"<<endl;}
        else if((fnum2+fnum3)>=10)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
