#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
// Gobardhan Meher

void solve() {
	ll n;
		cin >> n;
		ll ans = 0;
		for (int i = 1; i <= 9; i++) {
			ll number_here = i;
			while (number_here <= n) {
				number_here = number_here * 10LL + i;
				ans++;
			}
		}
		cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++) {
		solve();
	}
	
	return 0;
}
