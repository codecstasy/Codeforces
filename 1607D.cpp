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
        string s;
        cin >> s;
        vector <ll> vB,vR;
        for(ll i=0 ; i<n ; i++) {
        	if(s[i] == 'B') {
        		vB.pb(ar[i]);
        	}
        	else {
        		vR.pb(ar[i]);
        	}
        }
        //for(int i=0 ; i<vB.size() ; i++) cout << vB[i] << " \n"[i == vB.size()-1];
        //for(int i=0 ; i<vR.size() ; i++) cout << vR[i] << " \n"[i == vR.size()-1];
        sort(all(vB));
    	sort(all(vR));
    	ll Bsz = vB.size();
    	for(ll i=1 ; i<=Bsz ; i++) {
    		if(vB[i-1] < i) {
    			cout << "NO" << endl;
    			return;
    		}
    		//cout << i << " \n"[i == Bsz];
    	}
    	for(ll i=Bsz+1 ; i<=n ; i++) {
    		if(vR[i-Bsz-1] > i) {
    			cout << "NO" << endl;
    			return;
    		}
    		//cout << i << " \n"[i == n];
    	}
    	cout << "YES" << endl;
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