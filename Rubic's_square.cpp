#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()

{
ios_base::sync_with_stdio(false);

cin.tie(NULL);
ll n,r,c;
cin>>n>>r>>c;
ll a[n][n];
for(ll i=0;i<n;i++)
{
for(ll j=0;j<n;j++)
cin>>a[i][j];
}
ll R[n]={0};
ll C[n]={0};
for(ll i=0;i<r;i++)
{ ll k;
cin>>k;
R[--k]++;
}
for(ll i=0;i<n;i++)
{
if(R[i]>0)
{
ll k=R[i]%n;
for(ll j=0;j<k;j++)
{
ll p=a[i][n-1];
for(ll l=n-1;l>0;l--)
{
a[i][l]=a[i][l-1];
}
a[i][0]=p;
}
}
}
for(ll i=0;i<c;i++)
{
ll k;
cin>>k;
C[--k]++;
}
for(ll i=0;i<n;i++)
{
if(C[i]>0)
{
ll k=C[i]%n;
for(ll j=0;j<k;j++)
{
ll p=a[n-1][i];
for(ll l=n-1;l>0;l--)
{
a[l][i]=a[l-1][i];
}
a[0][i]=p;
}
}
}
for(ll i=0;i<n;i++)
{for(ll j=0;j<n;j++)
cout<<a[i][j]<<" ";
cout<<"\n";
}

return 0;

}
