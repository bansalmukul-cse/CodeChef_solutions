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
	    int n,x,res2;
	    cin>>n;
	    int s=0, c1=0,c0=0;
	    for(int i=1;i<=n;i++){
	        cin>>x;
	        c0+=(x==0);
	        c1+=(x==1);
	        res2 = min(c0,c1);
	        c0-=res2;c1-=res2;s+=res2;
	    }
	    
	     cout << s+c1/3 << endl;
	    
		
} 
		
	return 0;
	
}
