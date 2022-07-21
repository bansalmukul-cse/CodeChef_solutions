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
	    
	    vector<int>res;
	    int x=n;
	    int mn =1;
	    
	    for(int i=0;i<n;i++){
	        if(i%2==0){
	            cout<<x--<<" ";
	        }
	        else{
	            cout<<mn++<<" ";
	        }
	    }
	    
	    cout<<"\n";
		
} 
		
	return 0;
	
}
