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
	int ct =0;
	int ar[n];
	forn{
		cin >> ar[i];
	}
	for(int i = n-1; i>= 0; --i){
		if(ar[i] == 0) ct++;
		else 
			break;
	}
	cout << n - ct - 1 << endl;
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
