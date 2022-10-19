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
	    
	    if(n<=2){
	        cout<<s<<endl;
	    }
	    else{
	        sort(s.begin(),s.end());
	        cout<<s<<endl;
	    }
	    
	    
	    
		
} 
		
	return 0;
	
}
