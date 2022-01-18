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
	int n,X;
	bool flag=false;
	cin>>n>>X;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A,A+n,greater<>());
	int sum =0;
	int i ;
	for(i=0;i<n;i++){
		sum+= A[i];
		if(sum>=X){
			flag =true;
			break;
		}
	}
	if(flag){
	    cout<<i+1<<endl;
	}
		
	else
		cout<<"-1"<<endl;
	
} 
		
	return 0;
	
}
