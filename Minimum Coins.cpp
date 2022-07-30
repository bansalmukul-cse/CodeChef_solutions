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
	    int x;
	    cin>>x;
	    
	    int coins = x%10;
	    
	    if(x%10!=0){
	        cout<<coins<<endl;
	    }
	    else if(x%10==0){
	        cout<<"0"<<endl;
	    }
	    else{
	         cout<<x<<endl;
	    }
		
} 
		
	return 0;
	
}
