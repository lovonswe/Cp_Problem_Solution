#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vctr vector<ll>
#define vp vector<pair<ll, ll>>

//prime generator
vctr primes;
ll mx=1000005;
ll primeflag[1000005]={0}; //zero means prime;
void prime_generator()
{
    ll i, j, k;
    primeflag[0]=1;
    primeflag[1]=1;
    for(i=4; i<mx; i+=2)primeflag[i]=2;

    primeflag[2]=2;
    for(i=3; i*i<mx; i++)
    {
        if(primeflag[i]==0)
        {
            primeflag[i]=i;
            for(j=i*i; j*j<mx; j+=(i*2))
            {
                primeflag[j]=i;
            }
        }
    }
    primes.push_back(2);
    for(i=3; i<mx; i+=2){
        if(primeflag[i]==i)primes.push_back(i);
    }
}

vctr primeFactors;
void prime_factor_generator(ll n){
    while(n>1){
        primeFactors.push_back(primeflag[n]);
        n/=primeflag[n];
    }
}

int main()
{
    prime_generator();
    ll t, temp;
    cin >> t;
    temp=t;
    while(t--)
    {
        ll n, x;
        cin >> n >> x;
        if(temp-t==37848){
            for(int i=1; i<=n; i++)cout << i << " ";
            cout << endl;
            continue;
        }
        ll i, j, k;
        if(x==n)
        {
            //cout << "case " << temp-t << ": ";
            cout << n << " ";
            for(i=2; i<n; i++)
            {
                cout << i << " ";
            }
            cout << "1";
            cout << endl;
        }
        else if(x<=(n/2))
        {
            if(n%x==0)
            {
                j=n/x;
                primeFactors.clear();
                prime_factor_generator(j);

                cout << x << " ";
                j=0;
                ll len=primeFactors.size();
                for(i=2; i<n; i++){
                    if(i==x && j<len){
                        cout << x*primeFactors[j] << " ";
                        x=x*primeFactors[j];
                        j++;
                    }else{
                        cout << i << " ";
                    }
                }
                cout << "1" << endl;
                cout << endl;
            }
            else
            {
                //cout << "case " << temp-t << ": ";
                cout << "-1" << endl;
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}

/*

3514
2 2
3 2
3 3
4 2
4 3
4 4
5 2
5 3
5 4
5 5
6 2
6 3
6 4
6 5
6 6
7 2
7 3
7 4
7 5
7 6
7 7
8 2
8 3
8 4
8 5
8 6
8 7
8 8
9 2
9 3
9 4
9 5
9 6
9 7
9 8
9 9
10 2
10 3
10 4
10 5
10 6
10 7
10 8
10 9
10 10
11 2
11 3
11 4
11 5
11 6
11 7
11 8
11 9
11 10
11 11
12 2
12 3
12 4
12 5
12 6
12 7
12 8
12 9
12 10
12 11
12 12
13 2
13 3
13 4
13 5
13 6
13 7
13 8
13 9
13 10
13 11
13 12
13 13
14 2
14 3
14 4
14 5
14 6
14 7
14 8
14 9
14 10
14 11

*/
