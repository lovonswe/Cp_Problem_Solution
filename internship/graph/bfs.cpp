#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vctr vector<ll>
vctr a[100];
ll node;
void bfs(ll n)
{

    queue<ll> q;
    q.push(1);
    ll parent[node+5]= {0};
    ll level[node+5]= {0};
    ll visited[node+5]= {0};
    parent[1]=0;
    level[1]=0;
    visited[1]=1;

    while(!q.empty())
    {
        ll p=q.front();
        cout << "front : " << p << endl;
        q.pop();
        for(ll ii=0; ii<a[p].size(); ii++)
        {
            ll i=a[p][ii];
            cout << "p : " << p << endl;
            cout << "i : " << i << "  " << visited[i] << endl;
            if(visited[i]==0)
            {
                cout << i << " pushed" << endl;
                q.push(i);
                parent[i]=p;
                level[i]=level[p]+1;
                visited[i]=1;
            }
        }
        cout << "   size : " << q.size() << endl;
    }

    cout << "Distence of node " << n << " from the root node is : " << level[node]  << endl;
    cout << "Path : " ;
    while(parent[n]!=0)
    {
        cout << n << " ";
        n = parent[n];
    }
    cout << n << endl;
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {

        cin >> node;

        for(ll i=0; i<node-1; i++)
        {
            ll u, v;
            cin >> u >> v;

            a[u].push_back(v);
            a[v].push_back(u);
        }


        bfs(5);

         for(ll i=0; i<node; i++)a[i].clear();
    }
}
