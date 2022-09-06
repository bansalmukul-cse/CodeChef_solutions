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
	    
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    int a1 = (a+b)/2;
	    int a2 = (b+c)/2;
	    int a3 = (a+c)/2;
	    
	    if(a1>=35 && a2>=35 && a3>=35){
	        cout<<"pass"<<endl;
	    }
	    else{
	        cout<<"fail"<<endl;
	    }
	}
		
	return 0;
	
}
