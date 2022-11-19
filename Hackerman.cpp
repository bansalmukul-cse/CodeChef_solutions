#include<bits/stdc++.h> // bansal_mukul
#include <cmath>
#include<math.h>
#include<iostream>
using namespace std;
int prime(int n){
    if(n==2){
        return 1;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    
	   int a,b;
	   cin>>a>>b;
	   int c = a+b;
	   if(prime(c)){
	       cout<<"Alice"<<endl;
	   }
	   else{
	       cout<<"Bob"<<endl;
	   }
	    
	    
		
} 
		
	return 0;
	
}
