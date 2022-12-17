#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
// Gobardhan Meher

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int smax = 0, fmax = 0;
    int ftot = 0, stot = 0;
    while(t--){
        int first, second;
    cin >> first >> second;
    ftot += first;
    stot += second;
    
    if(ftot > stot){
        int diff = ftot - stot;
        if(diff > fmax) fmax = diff;
    }
    else{
        int difff = stot - ftot;
        if(difff > smax) smax = difff;
    }
    }
    if(fmax > smax) cout << "1" << " ";
    else cout << "2" << " ";

    if(fmax > smax) cout << fmax;
    else cout << smax ;
}