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
	    int x1,x2,y1,y2;
	    cin>>x1>>y1>>x2>>y2;
	    
	    int val1 = x1+y1;
	    int val2 = x2+y2;
	    
	    if(val1<=val2){
	        cout<<val1<<endl;
	    }
	    else{
	        cout<<val2<<endl;
	    }
		
} 
		
	return 0;
	
}
