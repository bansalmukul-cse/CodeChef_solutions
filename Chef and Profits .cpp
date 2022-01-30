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
	int x,y,z;
	cin>>x>>y>>z;
	
	int before = x*y;
	int after = x*z;
	
	int diff = after-before;
	
	cout<<diff<<endl;
	
	
} 
		
	return 0;
	
}
