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
	    
	    int n,m;
	    cin>>n>>m;
	    long long res =0;
	    
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        res += max(abs(m-arr[i]),abs(1-arr[i]));
	    }
	    
	    cout<<res<<endl;
	    
		
} 
		
	return 0;
	
}
