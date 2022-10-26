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
	    float a,b,x,y;
	    cin>>a>>b>>x>>y;
	    
	    float res1 = a/x;
	    float res2 = b/y;
	    
	    if(res2>res1){
	        cout<<"Chef"<<endl;
	    }
	    else if(res1>res2){
	        cout<<"chefina"<<endl;
	    }
	    else{
	        cout<<"Both"<<endl;
	    }
	    
	    
	    
		
} 
		
	return 0;
	
}
