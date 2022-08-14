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
	    
	    if(a%2==0){
	        if(b%2==0){
	            cout<<0<<endl;
	        }
	        else if(b%2!=0){
	            cout<<a<<endl;
	        }
	    }
	    else if(a%2!=0){
	        if(b%2!=0){
	            cout<<a+b-1<<endl;
	        }
	        else if(b%2==0){
	            cout<<b<<endl;
	        }
	        }
	    
		
} 
		
	return 0;
	
}
