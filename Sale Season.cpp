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
	    
	    if(x<=100){
	        cout<<x<<endl;
	    }
	    else if(x>100 && x<=1000){
	        cout<< x - 25 <<endl;
	    }
	    else if(x>1000 && x<=5000){
	        cout<<x -100<<endl;
	    }
	    else{
	        cout<< x- 500<<endl;
	    }
	    
	    
	    
		
} 
		
	return 0;
	
}
