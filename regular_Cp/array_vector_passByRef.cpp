#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vctr vector<ll>
#define vp vector<pair<ll, ll>>

int *passArray(int *a){
    cout << "a0 : " << *(a+0) << endl;
    cout << "a2 : " << a[2] << endl;
    return a;
}

void passVector(vector<int> & v){
    cout << "v0 : " << v[0] << endl;
    cout << "v2 : " << v[2] << endl;
}

int main(){
    int a[]={1,2,3,4};

    int *b;
    vector<int> v(4);

    v[0]=10;
    v[1]=11;
    v[2]=12;
    v[3]=13;

    b=passArray(a);
    passVector(v);
}



