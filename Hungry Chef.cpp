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
	    int x,y,n,r;
	    cin>>x>>y>>n>>r;
	    
	    if((r/y)>=n){
	        cout<<0<<" "<<n<<endl;
	    }
	    else if((r/x)<n){
	        cout<<-1<<endl;
	    }
	    else{
	        int g = y*n;
	        int f = x-y;
	        
	        int m = (r-g)/(f);
	        
	        if((r-(g))%(f)!=0){
	            m = m+1;
	        }
	        cout<<m<<" "<<n-m<<endl;
	    }
	    
		
} 
		
	return 0;
	
}
