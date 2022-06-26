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
	    int x,y;
	    cin>>x>>y;
	    int val1=0,val2=0,res=0;
	    if(x%10==0){
	        val1 =  (x/10);
	    }
	    else{
	        val1 =  (x/10) +1;
	    }
	    
	    if(y%10==0){
	        val2 =  (y/10);
	    }
	    else{
	        val2 =  (y/10) +1;
	    }
	    
	    res = abs(val1- val2);
	    
	    cout<<res<<endl;
	    
	    
		
} 
		
	return 0;
	
}
