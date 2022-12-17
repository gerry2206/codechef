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
	int n;
	cin >> n;
	int ar[n];
	forn{
		cin >> ar[i];
	}
	int pn = 0, nn = 0;
	forn{
		if(ar[i] == 1) pn++;
		else nn++;
	}
	int diff = abs(pn - nn);
	if(diff % 2 != 0) cout << "-1" << endl;
	else cout << diff / 2 << endl;
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
