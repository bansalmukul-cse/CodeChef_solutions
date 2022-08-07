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
	    
	    vector<char> str1;
	    vector<char> str2;
	    
	    for(int i=0;i<n;i++){
	        if(i%2==0){
	            str1.push_back(s[i]);
	        }
	        else{
	            str2.push_back(s[i]);
	        }
	    }
	    
	    sort(str1.begin(),str1.end());
	    sort(str2.begin(),str2.end());
	    
	    if(str1==str2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
        
		
} 
		
	return 0;
	
}
