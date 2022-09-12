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
	    long long  n;
	    cin>>n;
	    
	    long long even = n/2;
	    long long odd = n/2;
	    
	    if(n%2!=0){
	        odd++;
	    }
	    
	    cout<<2*(even*odd)<<endl;
	    
	    
	    
		
} 
		
	return 0;
	
}
