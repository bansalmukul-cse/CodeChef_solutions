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
	    int n,m=0,x,s=0;
	    cin>>n;
	    for(int i=1;i<n;i++){
	        cin>>x;
	        s +=x;
	        m = max(m,x);
	    }
	    cout<<s+m<<endl;
	    
		
} 
		
	return 0;
	
}
