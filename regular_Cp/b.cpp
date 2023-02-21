#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vctr vector<ll>
#define pai pair<ll, ll>
#define vp vector<pair<ll, ll>>
/*
In general, printf and scanf are faster
than cin and cout . This is because printf
and scanf are based on the C standard
library, which is generally faster than
the C++ standard library,
which cin and cout are part of.Dec 31, 2022

*/


int main()
{

    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, j, k;
        cin >> n;
        ll ans=0;
        for(i=2; i<=n; i++)
        {
            ll temp=i, divisor=0;
            ll rem=n%i, cnt=0;
            for(j=1; j*j<=i; j++)
            {
                if(temp%j==0)
                {
                    divisor++;
                    if(j<=rem)cnt++;
                    if(temp/j!=j)
                    {
                        divisor++;
                        if((temp/j)<rem)cnt++;
                    }
                }

            }
            divisor--;
            divisor*=(n/i);
            divisor+=cnt;
            ans+=divisor;
        }
        cout << ans << endl;
    }

}

/*Here's a table containing commonly used types in C programming for quick access.

Type	Size (bytes)	Format Specifier
int	at least 2, usually 4	%d, %i
char	1	%c
float	4	%f
double	8	%lf
short int	2 usually	%hd
unsigned int	at least 2, usually 4	%u
long int	at least 4, usually 8	%ld, %li
long long int	at least 8	%lld, %lli
unsigned long int	at least 4	%lu
unsigned long long int	at least 8	%llu
signed char	1	%c
unsigned char	1	%c
long double	at least 10, usually 12 or 16	%Lf
*/
