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
	    string a;
	    cin>>a;
	    string b;
	    cin>>b;
	    map<char,int>res1;
	    map<char,int>res2;
	    
	    for(int i=0;i<n;i++){
	        res1[a[i]]++;
	        res2[b[i]]++;
	    }
	    
	    int ans =0;
	    for(int j=0;j<n;j++){
	        int c=0;
	        int d =0;
	        
	     if(res1.find(a[j])!=res1.end())
         c=res1[a[j]];
         if(res2.find(a[j])!=res2.end())
         d=res2[a[j]];
         int p=min(c,d);
         ans=max(ans,p);
         
	    }
	    
	    
	  cout<<ans<<endl; 
	    
		
} 
		
	return 0;
	
}
