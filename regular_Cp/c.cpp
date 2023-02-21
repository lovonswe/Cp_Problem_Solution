#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vctr vector<ll>
#define vp vector<pair<ll, ll>>

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m, i, j, k;
        vctr a(3);
        for(i=0; i<3; i++)cin >> a[i];
        sort(a.begin(), a.end());
        if(a[0]==a[2]==a[1]){
            cout << "0" << endl;
        }else if(a[0]==a[1]){
            if((a[2]-a[0])%2==0){
                cout << (a[2]-a[0])/2 << endl;
            }else{
                cout << "-1" << endl;
            }
        }
        else if(a[1]==a[2]){
            cout << a[2]-a[0] << endl;
        }
        else{
            ll x,y,z;
            x=(a[2]-a[1])%2;
            y=(a[1]-a[0])%2;
            if(x==0 && y==0){
                x=(a[2]-a[1])/2;
               y= (a[2]-x-a[0]-x)/2+x;
               cout << y << endl;
            }
            else cout << "-1" << endl;
        }
    }
}
