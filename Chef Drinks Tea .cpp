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
		int x,y,z;
		cin>>x>>y>>z;
		if(x%y==0){
		    cout<<(x/y)*z<<endl;
		}
		else if(x<y){
		    cout<<z<<endl;
		}
		else{
		    cout<<((x/y)+1)*z<<endl;
		}
} 
		
	return 0;
	
}
