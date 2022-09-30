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
	    
	    
	    float  a,x,b,y;
	    cin>>a>>x>>b>>y;
	    
	    float  s1 = a/x;
	    
	    float s2 = b/y;
	    
	    if(s1==s2){
	        cout<<"Equal"<<endl;
	    }
	    else if(s1<s2){
	        cout<<"Bob"<<endl;
	    }
	    else {
	        cout<<"Alice"<<endl;
	    }
	    
	    
		
} 
		
	return 0;
	
}
