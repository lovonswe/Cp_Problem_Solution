#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vctr vector<ll>
#define vp vector<pair<ll, ll>>

int main()
{

        ll n, m, i, j, k;
        ll l, r, d;

        cin >> n >> d;
        string s;
        cin >> s;
        vctr a(n+5);
        j=0;
        for(i=0; i<n; i++){
            if(s[i]=='a')j++;
            a[i]=j;
        }

        l=0; r=1;
        ll mx=1;
        ll temp=mx;


            while(r<n){
            ll cnta;
            if(l==0)cnta=a[r];
            else cnta=a[r]-a[l-1];

            if(min(r-l+1-cnta,cnta)<=d){
                temp++;
                mx=max(mx, temp);
                r++;
            }else{
                temp--;
                l++;
            }
        }

        cout << mx << endl;

}

