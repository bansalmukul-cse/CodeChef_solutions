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
	    int n,i,c=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	   for(i=0;i<n;i++){
	       if(s[i]=='1'){
	           c++;
	       }
	       else{
	           break;
	       }
	   }
	   cout<<c<<endl;
	    
	    
		
} 
		
	return 0;
	
}
