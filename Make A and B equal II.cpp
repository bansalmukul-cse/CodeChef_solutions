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
	    long long a[n],b[n],c[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    
	    long long maxn =0;
	    long long sum =0;
	    for(int i=0;i<n;i++){
	        c[i]= a[i]-b[i];
	        sum += c[i];
	        
	        if(c[i]>0){
	            maxn += c[i];
	        }
	    }
	    
	    if(sum==0){
	        cout<<maxn<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	    
	    
	    
		
} 
		
	return 0;
	
}
