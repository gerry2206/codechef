#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int ans = 0;
    
    forn{
        int t;
        cin >> t;

        if(t % k == 0) {
            ans++;
        }
    }
    cout << ans << endl;
    
    return 0;
}
