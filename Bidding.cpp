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
		int a,b,c;
		cin>>a>>b>>c;
		
		int maxi = max({a,b,c});
		
		if(maxi==a){
		    cout<<"Alice"<<endl;
		}
		else if(maxi == b){
		    cout<<"Bob"<<endl;
		}
		else{
		    cout<<"Charlie"<<endl;
		}
} 
		
	return 0;
	
}
