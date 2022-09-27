#include<bits/stdc++.h> // bansal_mukul
#include <cmath>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long  t;
	cin>>t;
	while(t--)
	{
	    long long  x,y;
	    cin>>x>>y;
	    
	    int a  = min((3*x - 2*y),y);
	    int b = y;
	    int c  = max((3*x - 2*y),y);
	    
	    cout<<a<<" "<<b<<" "<<c<<endl;
	    
	    
	    
	    
		
} 
		
	return 0;
	
}
