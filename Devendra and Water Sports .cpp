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
		int Z,Y,A,B,C,diff,sum;
		cin>>Z>>Y>>A>>B>>C;
		diff = Z-Y;
		sum = A+B+C;
		if(diff>=sum){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
} 
		
	return 0;
	
}
