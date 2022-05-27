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
	    int n,res=0;
	    cin>>n;
	    string a;
	    cin>>a;
	    for(int i=0;i<n/2;i++){
	        if(a[i]!=a[n-1-i]){
	            res++;
	        }
	    }
	    cout<<(res+1)/2<<endl;
		
} 
		
	return 0;
	
}
