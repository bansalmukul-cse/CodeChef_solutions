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
	    int val = y-x;
	    
	    if(val<=0){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<val<<endl;
	    }
	
		
} 
		
	return 0;
	
}
