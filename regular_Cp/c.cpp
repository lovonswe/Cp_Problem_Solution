#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))

vector<int> getDivisors(int n)
{
    vector<int> res;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                res.pb(i);

            else // Otherwise print both
                res.pb(i);
                res.pb(n/i);
        }
    }
    return res;
}

void solve() {
    int n, m; cin >> n >> m;
    set<int> topics;
    for(auto i = 2; i <= m; i++) {topics.insert(i);}

    if (m == 1) {cout << 0 << endl;}

    vector<int> stu; for(auto i = 0; i < n; i++) {int d; cin >> d; stu.pb(d);}
    sort(all(stu));

    int miv = INT_MAX;
    int mav = INT_MIN;

    for(auto i = 0; i < n; i++) {
        int prevS = topics.size();
        for(auto val : getDivisors(stu[i])) {
            topics.erase(val);
        }
        if (prevS > (int)topics.size()) {
            miv = min(miv, stu[i]);
            mav = max(mav, stu[i]);
        }
    }

    int diff = mav - miv;

    if ((int)topics.size() == 0) {
        diff = mav-miv;
    } else {
        cout << -1 << endl;
        return;
    }

    for(auto i = 2; i <= m; i++) {topics.insert(i);}

    sort(all(stu), greater<>());

    miv = INT_MAX;
    mav = INT_MIN;

    for(auto i = 0; i < n; i++) {
        int prevS = topics.size();
        for(auto val : getDivisors(stu[i])) {
            topics.erase(val);
        }
        if (prevS > (int)topics.size()) {
            miv = min(miv, stu[i]);
            mav = max(mav, stu[i]);
        }
    }

    cout << min(mav - miv, diff) << endl;
}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
