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
		int N,M;
		cin>>N>>M;
		if(N%2!=0 && M%2!=0){
			cout<<(N/2+1)*(M/2+1)<<endl;
		}
		else if(N%2==0 && M%2!=0){
			cout<<(N/2)*(M/2+1)<<endl;
		}
		else if(N%2!=0 && M%2==0){
			cout<<(N/2+1)*(M/2)<<endl;
		}
		else if(N%2==0 && M%2==0){
			cout<<(N/2)*(M/2)<<endl;
		}
		
} 
		
	return 0;
	
}
