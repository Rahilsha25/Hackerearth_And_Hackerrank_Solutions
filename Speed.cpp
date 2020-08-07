#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<fstream>
#include<cstdlib>
#include<cassert>
#include<vector>
#include<algorithm>
#include<stack>
#include<set>
#include<map>
#include<list>
#include<math.h>
#include<ctime>
#define LL long long
#define ULL unsigned long long
#define F first
#define S second
#define pb push_back
#define FOR(i,lb,ub) for(i=lb;i<=ub;i++)
#define RFOR(i,ub,lb) for(i=ub;i>=lb;i--)
#define FORS(it,v) for(it=v.begin();it!=v.end();it++)
#define st_clk double st=clock();
#define end_clk double en=clock();
#define show_time cout<<"\tTIME="<<(en-st)/CLOCKS_PER_SEC<<endl;
#define sc(n) scanf("%d",&n)
#define scst(n) scanf("%s",n)
#define f_in(st) freopen(st,"r",stdin);
#define f_out(st) freopen(st,"w",stdout);
LL gcd(LL a, LL b) { return b?gcd(b,a%b):a; }
using namespace std;
 
int main()
{
     #ifndef ONLINE_JUDGE
     //f_in("in.txt");
     //f_out("outt.txt");
     #endif
     int t,i,j;
     cin>>t;
     while (t--)
     {
     	int n,tmp;
     	LL ans = 0;
     	cin>>n;
     	assert(n<10000);
     	FOR(i,0,n-1)
     	{
     		int x;
     		cin>>x;
     		if (!i)
     		{
     			tmp = x;
     			ans++;
     		}
     		else if (x<tmp)
     		{
     			tmp = x;
     			ans++;
     		}
     		
     		
     	}
     	cout<<ans<<endl;
     }
return 0;
}
