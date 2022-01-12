#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	 
	 long long n,d,sum=1;
	 
	 cin >> n >> d;
	 
	for(long i =1;i<=d;i++){
	    if(i<=10){
	      sum = sum*2;
	      if(sum>n){
	          sum = n;
	          break;
	      }
	    }
	    else{
	      sum = sum*3;
	      if(sum>n){
	          sum = n;
	          break;
	      } 
	    }
	}
	cout<<sum<<endl;
	
	}
	return 0;
}
