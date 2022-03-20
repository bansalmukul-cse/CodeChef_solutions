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
		int x;
		cin>>x;
		int tencoins = x%10;
		int fivecoins = tencoins%5;
		
		if(tencoins == 0){
			cout<<x/10<<endl;
		}
		else if(fivecoins == 0){
			int maxi = x/10+ tencoins/5;
			cout<<maxi<<endl;;
		}
		else{
			cout<<"-1"<<endl;
		}
    
} 
		
	return 0;
	
}
