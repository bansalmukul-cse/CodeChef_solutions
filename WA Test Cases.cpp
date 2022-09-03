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
	     int t = INT_MAX;
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
	            t = min(t,arr[i]);
	        }
	       
	    }
	     cout<<t<<endl;
		
} 
		
	return 0;
	
}
