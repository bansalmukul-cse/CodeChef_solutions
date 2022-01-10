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
	long long T1,T2,R1,R2;
	long long res1,res2;
	cin>>T1>>T2>>R1>>R2;
	res1=(T1*T1)*(R2*R2*R2);
	res2=(T2*T2)*(R1*R1*R1);
	if(res1==res2){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
} 
		
	return 0;
	
}
