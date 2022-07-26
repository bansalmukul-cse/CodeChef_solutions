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
		int n;
		cin>>n;
		int arr[n];
		map<int,int>m;
		for(int i=0;i<n;i++){
		    cin>>arr[i];
		    m[arr[i]]++;
		}
		
	
		 string ans = "YES";
		 
		  for (auto& it : m){
		      if(it.second%it.first!=0){
		         ans ="NO";
		         break;

		      }
		      
		  }
		  cout<<ans<<endl;
} 
		
	return 0;
	
}
