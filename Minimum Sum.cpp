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
	    long long int n;
	    cin>>n;
	    long long int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    long long int min_gcd= 1e9;
	    for(int i=0;i<n-1;i++){
	        long long int ans = __gcd(arr[i],arr[i+1]);
	        if(ans<min_gcd) min_gcd = ans;
	    }
	    
	    cout<<min_gcd*n<<endl;
	    
	    
		
} 
		
	return 0;
	
}
