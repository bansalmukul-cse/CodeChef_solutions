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
	int n,x,y;
	cin>>n>>x>>y;
	int coin=0;
	int centre = (n+1)/2;
	int xy =x+y;
	if(xy%2==0){
		cout<<"0"<<endl;
	}
	else{
		cout<<"1"<<endl;
	}
	
	
} 
		
	return 0;
	
}
