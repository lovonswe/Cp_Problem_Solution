
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vctr vector<ll>
#define vp vector<pair<ll, ll>>
//a
ll a[]={1,2,3,4,5,6,7,8};

ll nth_fibonacchi_number(ll n){
    if(n==0)return 0;
    if(n==1)return 1;

    return nth_fibonacchi_number(n-1)+nth_fibonacchi_number(n-2);
}

ll arr_multiplication(ll n){
    if(n==0)return a[n];

    return a[n]*arr_multiplication(n-1);
}

bool palindrome_checking(ll i, ll j, bool b, string s){
    if(b==false)return false;
    if(i>j)return true;

    if(s[i]!=s[j])return palindrome_checking(++i, --j, false, s);
    return palindrome_checking(++i, --j, true, s);
}

bool binary_search_iterative(ll l, ll r, ll target){
    ll flag=0;
    while(l<=r){
        ll mid=(l+r)/2;
        if(a[mid]==target){flag=1;
        return true;
        }
        else if(a[mid] > target) r=mid-1;
        else if(a[mid] < target) l=mid+1;
    }

    return false;
}

bool binary_search_recursive(ll l, ll r, ll target){
    ll mid=(l+r)/2;
    if(a[mid]==target)return true;
    if(l==r && a[mid]!=target){
        return false;
    }

    if(target>a[mid])return binary_search_recursive(mid+1, r, target);
    return binary_search_recursive(l, mid-1, target);
}

int printNtoZero_recursive(ll n){
    cout << n << " ";
    if(n==0)return 0;

    return n+printNtoZero_recursive(n-1);
}

void printUniqueElements(vctr a , ll n){
    ll j=0, i;
        for(i=0; i<n-1; i++){
            if(a[i]!=a[i+1]){
               ll temp=a[i+1], flag=0;
               if(i+2<n && a[i+1]==a[i+2])flag=1;
                a[i+1]=a[j];
                a[j++]=temp;
                i+=flag;
            }
        }
        for(i=0; i<=j; i++)cout << a[i] << " ";
        cout << endl;
}

void swapTwo(ll x[]){
    x[0]^=x[1];
    x[1]^=x[0];
    x[0]^=x[1];
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x[]={3,4};
        swapTwo(x);
        cout << x[0] << " " << x[1] << endl;





/*
        cout << nth_fibonacchi_number(n) << endl;
        cout << "multiplication result of first " << n << " elements : " << arr_multiplication(n) << endl;

        string s;
        cout << "Enter a string : ";
        cin >> s;

        if(palindrome_checking(0, s.size()-1, true, s)){
            cout << "Palindrome" << endl;
        }else cout << "Not Palindrome" << endl;
*/
        //if(binary_search_recursive(0, 7, n))cout << "n : " << n << " exists" << endl;
        //else cout << "Does not exist." << endl;

        //ll sum=printNtoZero_recursive(n);
        //cout << endl<< "sum " << sum << endl;;
    }
}
