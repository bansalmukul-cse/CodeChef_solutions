#include<bits/stdc++.h> // bansal_mukul
#include <cmath>
#include<math.h>
#include<iostream>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    
	    ll n;
	    cin>>n;
	    
	    vector<ll>arr(n);
	    
	    unordered_map<ll,ll>mp;
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        mp[arr[i]]++;
	    }
	    
	    ll ans =0;
	    
	    for(auto x:mp){
	        if(x.second>1){
	            ll val = x.second;
	            ans += val*(val-1)/2;
	        }
	        
	    }
	    
	    cout<<ans<<endl;
	    
	    
		
} 
		
	return 0;
	
}
