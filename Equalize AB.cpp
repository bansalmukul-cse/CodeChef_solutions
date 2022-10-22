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
	    int a,b,x;
	    cin>>a>>b>>x;
	    
	    if(a<=b){
	        if((b-a)%(x*2)==0){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    else if(a>b){
	        if((a-b)%(x*2)==0){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    
	    
		
} 
		
	return 0;
	
}
