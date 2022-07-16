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
	    int m[n];
	    for(int i=0;i<n;i++){
	        cin>>m[i];
	        res+=m[i];
	    }
	    
	    if(res%2==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
} 
		
	return 0;
	
}
