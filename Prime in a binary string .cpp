#include <bits/stdc++.h>        
using namespace std;
#define ll long long 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin>>t;
	while(t--)
	{
    string s;
	 cin>>s;
    if(s.length()==1) 
	{
	cout<<"NO";
	}
	else
    {
    int c=0,t=-1;
	for(int i=0;i<s.length();i++)
	 if(s[i]=='1') 
	 {
	 c++;
	 t=i+1;
	 }

    if(c==0 ||(c==1&&t==s.length())) 
	cout<<"NO";
    else 
	cout<<"YES";
    } 
		cout<<"\n";
	}
    return 0;
}
