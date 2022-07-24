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
		
		string s;
		cin>>s;
		
		int ans =0;
		
		for(int i=0;i<n-1;i++){
		    if(s[i]=='1' && s[i+1] == '0'){
		        ans++;
		    }
		}
		
		cout<<ans<<endl;
} 
		
	return 0;
	
}
