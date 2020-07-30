#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,a,b,r;
    cin>>n>>m;
    vector<int> graph[n+1];
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    r=(n*n-3*n+2)/2;
    cout<<r<<endl;
}
