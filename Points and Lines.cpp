#include<bits/stdc++.h>
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
	
	set<int> res1;
	set<int> res2;
	while(n--){
		int v,h;
		cin>>v>>h;
		
		res1.insert(v);
		res2.insert(h);
	}
	cout<<res1.size() + res2.size()<<endl;
	
	
} 
		
	return 0;
	
}
