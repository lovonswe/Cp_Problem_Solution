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


#include <bits/stdc++.h>
using namespace std;


int main()
{
    prime_generator();
    int t;
    cin >> t;
    while(t--)
    {
        ll i, j, k;
        primeFactors.clear();
        prime_factor_generator(t);
        cout << "prime factor of " << t << " : " ;
        for(i=0; i<primeFactors.size(); i++){
            cout << primeFactors[i] << " ";
        }
        cout << endl;
    }
}
