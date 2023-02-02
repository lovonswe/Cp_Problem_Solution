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
        ll n, i, j, k;
        cin >> n;
        vctr a(n+1);
        for(i=1; i<=n; i++)
        {
            cin >>a[i];
        }
        if(n==1)
        {
            cout << "0" << endl;
            continue;
        }

        if(n%2==0)
        {
            i=(n+1)/2;
            j=i+1;

        }
        else
        {
            i=(n+1)/2;
            j=i;
            i--;
            j++;
        }
        ll op=0;
        while(i>=1)
        {
            if(a[i]!=i || a[j]!=j)
            {
                op=i;
                if(a[1]==i && a[n]==j)
                {
                    op--;
                }
                break;
            }
            i--;
            j++;
        }

        cout << op << endl;
    }
}
