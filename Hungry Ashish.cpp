#include<bits/stdc++.h>
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
	int X,Y,Z;
	cin>>X>>Y>>Z;
	if(X>=Y)
	    cout<<"PIZZA"<<endl;
	else if(X>=Z)
	    cout<<"BURGER"<<endl;
	else if(X>Y && Y==Z)
	    cout<<"PIZZA"<<endl;
	else
	    cout<<"NOTHING"<<endl;
	    
	
	
} 
		
	return 0;
	
}
