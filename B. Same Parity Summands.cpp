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
    ll n,k;
    std::cin >> n >> k;
    if(k==n) {
        cout << "YES" << endl;
        for(int i=1 ; i<=n ; i++)
            cout << 1 << " ";
        cout << endl;
    }
    else if(k>n) {
        cout << "NO" << endl;
    }
    else if(n%2!=0 && k%2==0) {
        cout << "NO" << endl;
    }
    else if(n%2==0 && k%2==0) {
        cout << "YES" << endl;
        for(int i=1 ; i<=(k-1) ; i++)
            cout << 1 << " ";
        cout << n - (k-1) << endl;
    }
    else if(n%2!=0 && k%2!=0) {
        cout << "YES" << endl;
        for(int i=1 ; i<=(k-1) ; i++)
            cout << 1 << " ";
        cout << n - (k-1) << endl;
    }
    else if(n%2==0 && k%2!=0) {
        if(n < 2*k)
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            for(int i=1 ; i<=(k-1) ; i++) {
                cout << 2 << " ";
            }
            cout << n - 2*(k-1) << endl;
        }
    }
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
