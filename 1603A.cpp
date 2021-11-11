/*
             CodEcstasy
            SUST SWE-19
*/
#include <bits/stdc++.h>
#define ll long long
#define s second
#define f first
#define fora(i,n) for(int i=0 ; i<n ; i++)
#define ford(i,n) for(int i=n-1 ; i>=0 ; i--)
#define b begin
#define e end
#define all(v) (v).begin(),(v).end()
#define pb push_back
using namespace std;

void solve() {
	ll n;
	std::cin >> n;
   	vector <ll> ar(n);
    for(ll i=0 ; i<n ; i++) {
    	cin >> ar[i];
    }
    //for(ll i=0 ; i<n ; i++) cout << ar[i] << " " << ind[i] << endl;
    bool ok=true;
    for(ll i=0 ; i<n ; i++) {
    	ll j=i+2;
    	bool found=false;
    	while(j>=2) {
    		if(ar[i] % (j--) != 0) {
    			found=true;
				break;
    		}
		}
    	ok &= found;
    }
    if(ok)
    	cout << "YES" << endl;
    else
    	cout << "NO" << endl;
}

int main() 
{
    ll t, n;
    t = 1;
    std::cin >> t;
    while( t-- ) {
        solve();
    }
    return 0;
}