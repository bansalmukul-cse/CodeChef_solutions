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
	    
	    ll arr[n];
	    for(ll i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    sort(arr,arr+n);
	   
	   long long max_ele = -1e18;
	   long long min_ele = 1e18;
	   
	   max_ele = max(arr[0]*arr[0],arr[n-1]*arr[n-1]);
	   
	   if(arr[0]<0 && arr[n-1]>0){
	       min_ele = arr[0]*arr[n-1];
	   }
	   else{
	       for(int i=0;i<n;i++){
	           min_ele = min(min_ele,arr[i]*arr[i]);
	       }
	   }
	   cout<<min_ele<<" "<<max_ele<<endl;
	    
		
} 
		
	return 0;
	
}
