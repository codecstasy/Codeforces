/*
             codEcsTAsy
            SUST  SWE-19
*/
#include <bits/stdc++.h>
#define ll long long
#define s second
#define f first
#define fora(i,n) for(int i=0 ; i<n ; i++)
#define ford(i,n) for(int i=n-1 ; i>=0 ; i--)
#define pb push_back
using namespace std;

void solve() {
	int n,x,k,o=0,e=0;
	cin >> n >> x;
	//vector <int> v(n);
	for(int i=0 ; i<n ; i++) {
		cin >> k;
		if(k % 2 == 0)
			e++;
		else
			o++;
	}
	//cout << e << " " << o << endl;
	if(o<1) {
		cout << "No" << endl;
		return;
	}
	for(int i=1 ; i<=min(x,o) ; i+=2) {
		if(x-i <= e) {
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
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