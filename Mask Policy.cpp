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
	int n,a;
	cin>>n>>a;
	int d = n-a;
	if (d>a)
	    cout<<a<<endl;
	else if(d<a)
	    cout<<d<<endl;
	else
	    cout<<a<<endl;
	
	
} 
		
	return 0;
	
}
