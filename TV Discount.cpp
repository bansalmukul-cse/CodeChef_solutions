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
	    
	    int a,b,c ,d;
	    cin>>a>>b>>c>>d;
	    
	    int val1 = a-c;
	    int val2 = b-d;
	    
	    if(val1<val2){
	        cout<<"First"<<endl;
	    }
	    else if(val1>val2){
	        cout<<"Second"<<endl;
	    }
	    else{
	        cout<<"Any"<<endl;
	    }
	    
	    
	    
	    
		
} 
		
	return 0;
	
}
