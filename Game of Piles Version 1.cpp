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
	    int n,count=0;;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        if(a[i]%2!=0){
	            count++;
	        }
	    }
	    
	    if(a[0]==1 || count%2!=0){
	        cout<<"CHEF"<<endl;
	    }
	    else{
	        cout<<"CHEFINA"<<endl;
	    }
	    
		
} 
		
	return 0;
	
}
