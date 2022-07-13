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
		int s,x,y,z;
		cin>>s>>x>>y>>z;
		
		int res = s-(x+y);
		
		if(res>=z){
		    cout<<0<<endl;
		}
		else{
		    res=s-min(x,y);
		    if(res>=z){
		        cout<<1<<endl;
		    }
		    else{
		        cout<<2<<endl;
		    }
		}
} 
		
	return 0;
	
}
