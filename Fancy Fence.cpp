
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
using namespace std;
const ll mod=1e9+7;
ll f[1000005];
vector<ll>v;
map<ll,ll>::iterator it;
map<ll,ll>m;
ll power[32];
ll ex(ll a,ll b)
{
    if(b==0)
        return 1;
    else if(b%2==0)
        return (ex((a*a),b/2));
    else
        return (a*ex((a*a),(b-1)/2));
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n;
    cin>>t;
    while(t--)
    {


    cin>>n;
    ll y=0;
    for(i=3; i<=10000; i++)
    {
        if(n*i==(i-2)*180)
        {
            y=1;
            break;
        }
    }
    if(y==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    }

    return 0;
}

