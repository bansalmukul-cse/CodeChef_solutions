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
	    int a,b;
	    cin>>a>>b;
	    if(a%2!=0){
	        if(b-a>=3){
	            if(a%3==0){
	                cout<<a<<" "<<a+3<<endl;
	            }
	            else{
	                cout<<a+1<<" "<<a+3<<endl;
	            }
	        }
	        else{
	            cout<<-1<<endl;
	        }
	    }
	    else{
	        if(b-a>=2){
	            cout<<a<<" "<<a+2<<endl;
	        }
	        else{
	            cout<<-1<<endl;
	        }
	    }
	    
		
} 
		
	return 0;
	
}
