#include<bits/stdc++.h> // bansal_mukul
#include <cmath>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    unordered_map<int,int>mp;
	    
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	    }
	    
	   int maxi = INT_MIN;
	   for(auto x:mp){
	    //cout<<x.second<<endl;
	    maxi= max(maxi, x.second);
	  
	    
	   }
	   int c =0;
	   for(auto x:mp){
	       
	       if(maxi==x.second){
	           c++;
	       }
	       
	   }
	   
	   if(c<=1){
	       cout<<"yes"<<endl;
	   }
	   else{
	       cout<<"No"<<endl;
	   }
	   
	   
	   //cout<<"Yes"<<endl;
	    
	    
	    
		
} 
		
	return 0;
	
}
