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
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    
	   // if(w==x || w==y || w==z){
	   //     cout<<"yes"<<endl;
	   // }
	    
	    int a = x+y;
	    int b = y+z;
	    int c = x+z;
	    int d = x+y+z;
	    
	    if(w==a || w==b || w==c || w==d || w==x || w==y || w==z){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	    
	    
	    
		
} 
		
	return 0;
	
}
