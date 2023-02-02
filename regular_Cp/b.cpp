#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vctr vector<ll>
#define vp vector<pair<ll, ll>>

int main()
{
    int n=12;
    int i;
    for(i=0; i<=n/2; i++)
    {
        if(i<=5)
        {
            i++;
        }
        else break;
    }
    cout << i << endl;
}
