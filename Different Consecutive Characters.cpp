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
	   string s;
	   cin>>s;
	   int count =0;
	   for(int i= s.length()-2;i>=0;i--){
	       if(s[i]==s[i+1]){
	           count++;
	       }
	   }
	    
	    cout<<count<<endl;
	    
	    
		
} 
		
	return 0;
	
}
