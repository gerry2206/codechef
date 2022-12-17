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
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	bool ok = true;

	if(x1 == x2 or y1 == y2)
		ok = false;

	if(x2 == x3 or y2 == y3)
		ok = false;

	if(x1 == x3 or y1 == y3)
		ok = false;

	cout << (ok ? "YES" : "NO") << "\n";

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
