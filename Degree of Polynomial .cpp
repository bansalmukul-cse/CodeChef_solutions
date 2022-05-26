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
	int n,res;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
	for(int i = n-1;i>=0;i--){
	    if(a[i]!=0){
	       res =i;
	       break;
	    }
	}
	cout<<res<<endl;
} 
		
	return 0;
	
}
