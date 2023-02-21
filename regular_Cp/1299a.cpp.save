#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vctr vector<ll>
#define pai pair<ll, ll>
#define vp vector<pair<ll, ll>>

int main()
{
    int n;
    cin >> n;
    vctr a(n);
    for(int i=0; i<n; i++)cin >> a[i];

    if(n==1)
    {
        cout << a[0] << endl;
        return 0;
    }

    ll cnt[35]= {0};
    for(int j=30; j>=0; j--)
    {
        for(int i=0; i<n; i++)
        {
            if(((1<<j)&a[i])!=0)cnt[j]++;
        }
    }

    ll j=-1;
    for(int i=30; i>=0; i--)
    {
        if(cnt[i]==1)
        {
            j=i;
            break;
        }
    }

   // cout << "J : " << j << endl;

    if(j==-1)
    {
        for(int i=0; i<n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return 0;
    }

    for(int i=0; i<n; i++)
    {
        if( ((1<<j)&a[i])!=0)
        {
            int temp=a[i];
            a[i]=a[0];
            a[0]=temp;
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

}
