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
	    string a,b;
	    cin>>a>>b;
	    string c = " ";
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(a[i]!=b[i]){
	            count++;
	            c+=b[i];
	        }
	        else{
	            continue;
	        }
	    }
	    sort(c.begin(),c.end());
	    int ans =0;
	    for(int i=0;i<c.size()-1;i++){
	        if(c[i]!=c[i+1]){
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	    
		
} 
		
	return 0;
	
}
