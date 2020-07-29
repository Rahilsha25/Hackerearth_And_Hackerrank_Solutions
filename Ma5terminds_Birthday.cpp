#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define all(a) a.begin(),a.end()
#define bitcnt(x) __builtin_popcountll(x)
#define MOD 1000000007
#define NIL 0
#define MAXN 220001
#define EPS 1e-5
#define INF (1<<28)
typedef unsigned long long int uint64;
typedef long long int int64;
int a[1000006];
int cnt[1000006];
int main(){
	int i,j;
	for(i=2;i<=1000000;i++){
		if(a[i]==0){
			for(j=2*i;j<=1000000;j+=i)
			a[j]++;
		}
	}
	a[1]=1;
	cnt[1]=0;
	a[4]=0;
	for(i=2;i<=1000000;i++){
		if(a[i]==0)
		cnt[i]=1+cnt[i-1];
		else
		cnt[i]=cnt[i-1];
	}
	int t,l,r;
	cin>>t;
	while(t--){
	scanf("%d%d",&l,&r);
	int ans=(r-l+1)-(cnt[r]-cnt[l]);
	if(a[l]==0)
	ans--;
	printf("%d\n",ans);}
	return 0;
}
