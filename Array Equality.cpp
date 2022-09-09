#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll T;
	cin >> T;
	while(T--) {
	    ll n;
	    cin >> n;
	    ll a, maxfreq = 0, m;
	    map<ll, ll> freq;
	    for(ll i = 0; i < n; i++) {
	        cin >> a;
	        freq[a]++;
	        maxfreq = max(maxfreq, freq[a]);
	    }
	    m = n / 2;
	    if(n % 2) m++;
	    if(maxfreq <= m)
	    cout << "Yes" << endl;
	    else
	    cout << "No" << endl;
	}
	return 0;
}
