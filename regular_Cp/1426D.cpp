#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll i, j=1e15, k;
    ll sum=0, op=0;
    map<ll, ll> mp;
    for(i=0; i<n; i++)
    {
        cin >> k;
        ///sum+=k;
        ///mp[sum]++;
        //cout << sum << " " << mp[sum] << endl;
        if(sum+k==0)
        {
            op++;
            sum+=j;
            mp[sum]++;
            sum+=k;
            mp[sum]++;
        }
        else if(mp[sum+k]>=1)
        {
            op++;
            sum+=j;
            mp[sum]++;
            sum+=k;
            mp[sum]++;
        }else{
            sum+=k;
            mp[sum]++;
        }
    }
    cout <<op << endl;
}
