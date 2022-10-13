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
	    
	    int n,neg=0;
	    bool zero =0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    
	    for(int i=0;i<n;i++){
	        if(a[i]<0){
	            neg++;
	        }
	       if(a[i]==0){
	           zero =1;
	           break;
	       }
	      
	        
	    }
	    if(zero){
	        cout<<0<<endl;
	        
	        
	    }
	    
	    else{
	        if(neg%2==0){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<1<<endl;
	    }
	    
	    }
	    
		
} 
		
	return 0;
	
}
