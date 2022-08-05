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
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    if(x<=3){
	        cout<<(x*y)<<endl;
	    }
	    else{
	        if(x%3==0){
	            int res1 = x*y + (((x/3)-1)*z);
	            cout<<res1<<endl;
	        }
	        else if(x%3!=0){
	            int res2 =  x*y + ((x/3)*z);
	            cout<<res2<<endl;
	        }
	    }
		
} 
		
	return 0;
	
}
