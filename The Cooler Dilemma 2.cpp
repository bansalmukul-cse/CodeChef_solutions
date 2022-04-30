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
		long long int x,y;
		cin>>x>>y;
		if(y%x!=0){
		    cout<<y/x<<endl;
		}
		else{
		    cout<<y/x -1<<endl;
		}
} 
		
	return 0;
	
}
