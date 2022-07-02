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
	    int n;
	    cin>>n;
	    
	    if(n%2==0){
	        cout<<"1";
	        for(int i=1;i<n-1;i++){
	            cout<<"0";
	        }
	        cout<<"1"<<endl;
	    }
	    else{
	        for(int i =0;i<n/2;i++){
	            cout<<"0";
	        }
	        cout<<"1";
	        for(int i = (n/2)+1;i<n;i++){
	            cout<<"0";
	        }
	        cout<<endl;
	        
	    }
		
} 
		
	return 0;
	
}
