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
	    set<int>s;
	    
	    int x;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        
	        s.insert(x);
	    }
	    
	    if(s.size()%2!=0 && (n - s.size()==0)){
	        cout<<"No"<<endl;
	    }
	    else{
	        cout<<"Yes"<<endl;
	    }
	    
	   
	    
	    
	    
	    
	    
		
} 
		
	return 0;
	
}
