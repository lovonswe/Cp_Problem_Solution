
/*
    you are given a list of minutes to performs some tasks such as [2,6,3,4,1,7,2]
    what least time it will take if two worker workk in parallel and perform those tasks in a sequential order
*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vctr vector<ll>

vctr a;
ll n, SUM=0, mem[1000][1000];
int f(ll i, ll time){
    if(time<0)return INT_MIN;
    if(i==n)return 0;


    if(mem[i][time]!=-1)return mem[i][time];

    ll x,y;
    x = f(i+1, time-a[i])+a[i];
    y = f(i+1, time);

    mem[i][time]=max(x,y);
    cout << "i , time " << i <<" " << time << "    " << "x , y : " << x << " " << y << " mx xy "  << max(x, y) << endl;
    return mem[i][time];
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        cin >>n;

        a.clear();
        SUM=0;
        for(ll i=0; i<n; i++)
        {
            ll j;
            cin >> j;
            SUM+=j;
            a.push_back(j);
        }

        for(ll i=0; i<100; i++){
            for(ll j=0; j<1000; j++){
                mem[i][j]=-1;
            }
        }

       ll x = f(0, SUM/2);
       cout << max(x, SUM-x) << endl;
       //cout << x << endl;
    }
}





























//completely recursive solution

/*
    #include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vctr vector<ll>
vctr a;
ll n, SUM=0;
int f(ll i, ll sum){
    if(i==n){
        return sum;
    }

    ll x,y;
    x=f(i+1, sum+a[i]);
    y=f(i+1, sum);

    if(abs(2*x-SUM)<=abs(2*y-SUM))return x;
    return y;

}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        cin >>n;

        a.clear();
        SUM=0;
        for(ll i=0; i<n; i++)
        {
            ll j;
            cin >> j;
            SUM+=j;
            a.push_back(j);
        }

        ll x=f(0,0);
        ll y=abs(x-SUM);
        cout << "minimum time : " << max(x,y) << "  x: " << x << "   sum : " << SUM << endl;
    }
}

*/
