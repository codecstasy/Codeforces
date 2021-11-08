/*
             codEcstasy
            SUST  SWE-19
*/
#include <bits/stdc++.h>
#define ll long long
#define s second
#define f first
#define b begin
#define e end
#define all(v) (v).begin(),(v).end()
#define fora(i,n) for(int i=0 ; i<n ; i++)
#define ford(i,n) for(int i=n-1 ; i>=0 ; i--)
#define pb push_back
using namespace std;


void solve() {
	int n;
	std::cin >> n;
    vector <int> v(n);
    vector <int> even,odd;
	for(int i=0 ; i<n ; i++) {
    	cin >> v[i];
    	if(v[i] % 2 == 0)
    		even.pb(v[i]);
    	else
    		odd.pb(v[i]);
    }
    if(even.size() % 2 == 0) {
    	cout << "YES" << endl;
    	return;
    }
    sort(all(even));
    sort(all(odd));
    //int pairs=min(even.size(),odd.size());
    //cout << pairs << endl;
    for(int i=0 ; i<even.size() ; i++) {
    	for(int j=0 ; j<odd.size() ; j++) {
    		if((abs(even[i]-odd[j]) == 1)) {
    			cout << "YES" << endl;
    			return;
    		}
    	}
    }
    cout << "NO" << endl;
}

int main() 
{
    ll t;
    t = 1;
    std::cin >> t;
    while( t-- ) {
        solve();
    }
    return 0;
}