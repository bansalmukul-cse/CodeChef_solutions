#include<bits/stdc++.h> // bansal_mukul
#include <cmath>
#include<math.h>
#include<iostream>
using namespace std;
 #define int long long
signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s0=0,s1=0,s=0,a[100001];
	     cin>>n;
	     for(int i=1;i<=n;i++){
	         cin>>a[i];
	         s0 += a[i] ==0;
	         s1 += a[i] ==1;
	     }
	     for(int i=1;i<=n;i++){
	         if(i==1){
	              s+=(a[1]==a[n]);
	         }
	         else{
	             s+=a[i]==a[i-1];
	         }
	     }
	     s -= abs(s0-s1);
	     cout<<(s%4==0?"BOB":"Alice")<<endl;
} 
		

	
}
