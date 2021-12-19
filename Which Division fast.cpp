/*Problem Code: WHICHDIV*/

#include<bits/stdc++.h>
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
		int rating;
		cin>> rating;
		if(rating<1600){
			cout<<3<<"\n";
		}
		else if(rating>=1600 && rating<2000){
			cout<<2<<"\n";
		}
		else if(rating>=2000){
			cout<<1<<"\n";
		}
				
} 
		
	return 0;
	
}
