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
	    int a,b;
	    cin>>a>>b;
	    
	    
	   int  x = min(a,b);
	   int  y = max(a,b);
	    
	    if(a==b){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        while(y>x){
	            x = x*2;
	        }
	        if(x==y){
	            cout<<"Yes"<<endl;
	        }
	        else{
	            cout<<"No"<<endl;
	        }
	    }
	    
	    
	    
	    
	    
		
} 
		
	return 0;
	
}
