#include<bits/stdc++.h> // Mukul Bansal
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
		int n ,x,k;
		cin>>n>>x>>k;
		
		 int res = k/x;
    
    	if(res<= n){
        	cout << res <<endl;
    	}
    	else if(res > n){
        	cout << n <<endl;
    	}
	
    
} 
		
	return 0;
	
}
