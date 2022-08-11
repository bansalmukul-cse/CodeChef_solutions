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
	    int n,k,m;
	    cin>>n>>k>>m;
	    
	    int val = k*m;
	    
	    if(n%val==0){
	        cout<<(n/val)<<endl;
	    }
	    else if(n%val!=0){
	        cout<<(n/val) +1<<endl;
	    }
		
} 
		
	return 0;
	
}
