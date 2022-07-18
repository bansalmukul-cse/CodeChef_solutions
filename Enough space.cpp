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
		int n,x,y;
		cin>>n>>x>>y;
		
		int val = x *1 + (y*2);
		
		if(val<=n){
		    cout<<"YES"<<endl;
		}
		else{
		    cout<<"NO"<<endl;
		}
} 
		
	return 0;
	
}
