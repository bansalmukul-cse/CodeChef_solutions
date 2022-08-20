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
	    long long a,b,n,x;
	    cin>>a>>b>>n;
	    if(a%b==0){
	        cout<<-1<<endl;
	        continue;
	    }
	    x=n;
	    if(x%a !=0)
	    {
	        x = n+a-(x%a);
	    }
	    while(!(x%a==0 && x%b != 0))
	    {
	        x += a;
	    }
	    cout<<x<<endl;
		
} 
		
	return 0;
	
}
