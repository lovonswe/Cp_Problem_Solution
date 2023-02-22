#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vctr vector<ll>
#define pai pair<ll, ll>
#define vp vector<pair<ll, ll>>

struct comp
{
    bool operator()(const pair<ll, ll> &x, const pair<ll, ll> &y) const
    {
        if (x.first == y.first)
        {
            return x.first > y.first;
        }

        return x.first < y.first;
    }
};

int main()
{
    ll t;
    cin >>t ;
    while(t--)
    {
        ll n, x, i, j, k;
        cin >> n >> k;
        vctr a(n), b(n);
        vp sum;
        for(i=0; i<n; i++)cin >> a[i];
        for(i=0; i<n; i++)cin >> b[i];
        for(i=0; i<n; i++)
        {
            j=a[i]+b[i];
            sum.push_back({j, i});
        }

        sort(sum.begin(), sum.end());

        ll ans=0;
        ll l=INT_MAX, pos;
        for(i=0; i<n; i++)
        {
            if(sum[i].first<=k)
            {
                ans++;
                k-=sum[i].first;
            }
            else
            {
                ll flag=0;
                for(j=i; j<n; j++)
                {
                    if(a[sum[j].second]<=k)
                    {
                        ans++;
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    //cout << "i : " << i << endl;
                    for(j=0; j<i; j++){
                        k+=sum[j].first;
                        //cout << "   k : " << k << endl;
                        if(sum[i].first<=k){
                            k-=sum[i].first;
                           // cout << "      k : " << k << endl;
                            if(a[sum[j].second]<=k){
                                   // cout << "         sum[j].second: " << sum[j].second << endl;
                                ans++;
                                flag=1;
                            }
                            k+=sum[i].first;
                        }
                        k-=sum[j].first;
                        if(flag==1)break;
                    }
                }
               // cout << "flag : " << flag << endl;
                break;
            }
        }
        cout << ans << endl;

    }
}
