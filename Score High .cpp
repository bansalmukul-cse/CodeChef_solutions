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
	    int n,res= INT_MIN;
	    cin>>n;
	    int a[4];
	    for(int i =0;i<4;i++){
	        cin>>a[i];
	        res = max(res,a[i]);
	    }
	    cout<<res<<endl;
	    
	    
		
} 
		
	return 0;
	
}
