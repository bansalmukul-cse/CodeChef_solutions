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
	    
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    int res = n -k;
	    
	    if(n==k){
	        cout<<k*x<<endl;
	    }
	    else {
	        int val = k*x;
	        int p1 = res*x;
	        int p2 =  res*y;
            if(p1<p2){
                cout<< p1 + val<<endl;
            }
            else{
                cout<< p2 + val<<endl;
            }
	        
	        
	    }
		
} 
		
	return 0;
	
}
