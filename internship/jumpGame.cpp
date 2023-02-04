#include<bits/stdc++.h>
using namespace std;

int n;
int mem[10008];
int f(int i, vector<int>& a){

    if(i==n)return 1;
    if(a[i]==0)return 0;

    if(mem[i]!=-1)return mem[i];

    int x=0;
    for(int j=1; j<=a[i]; j++){
        if(i+j>n)break;
        x|=f(i+j, a);
    }

    mem[i]=x;
    return mem[i];

}
int main(){
    int t;
    cin >> t;
    while(t--){

        cin >> n;
        vector<int> a(n);
        for(int  i=0; i<n; i++)cin >> a[i];

        for(int i=0; i<10008; i++)mem[i]=-1;

        if(f(0, a)==1)cout << "true" << endl;
        else cout << "false" << endl;
    }
}
