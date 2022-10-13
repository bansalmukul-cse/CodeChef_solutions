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
	    
	    int n,k;
	    cin>>n>>k;
	    vector<int>a;
	    int x;
	    int g=0;
	   for(int i=0;i<n;i++){
	       cin>>x;
	       g = __gcd(g,x);
	       a.push_back(x);
	   }
	   
	   x=0;
	   int count =0;
	   
	   for(int i=0;i<n;i++){
	       x = __gcd(x,a[i]);
	       if(x==g){
	           count++;
	           x =0;
	       }
	   }
	   
	   if(count>=k){
	       cout<<"Yes"<<endl;
	   }
	   else{
	       cout<<"No"<<endl;
	   }
	    
	    
		
} 
		
	return 0;
	
}
