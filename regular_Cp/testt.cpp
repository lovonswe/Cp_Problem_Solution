#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;
        ll alice_mood = 0, bob_mood = 0;
        ll jokes_told = 0;
        while(a1 > 0 || a2 > 0 || a3 > 0 || a4 > 0)
        {
            if(alice_mood >= 0 && bob_mood >= 0)
            {
                if(a1 > 0)
                {
                    a1--;
                    alice_mood++;
                    bob_mood++;
                    jokes_told++;
                }
                else if(a2 > 0)
                {
                    a2--;
                    alice_mood++;
                    bob_mood--;
                    jokes_told++;
                }
                else if(a3 > 0)
                {
                    a3--;
                    alice_mood--;
                    bob_mood++;
                    jokes_told++;
                }
                else if(a4 > 0)
                {
                    a4--;
                    alice_mood--;
                    bob_mood--;
                    jokes_told++;
                }
            }
            else if(alice_mood < 0 && bob_mood < 0)
            {
                break;
            }
            else
            {
                if(alice_mood < 0)
                {
                    if(a2 > 0)
                    {
                        a2--;
                        alice_mood++;
                        bob_mood--;
                        jokes_told++;
                    }
                    else if(a1 > 0)
                    {
                        a1--;
                        alice_mood++;
                        bob_mood++;
                        jokes_told++;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if(a3 > 0)
                    {
                        a3--;
                        alice_mood--;
                        bob_mood++;
                        jokes_told++;
                    }
                    else if(a1 > 0)
                    {
                        a1--;
                        alice_mood++;
                        bob_mood++;
                        jokes_told++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        cout << jokes_told << "\n";
    }
}
