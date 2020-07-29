#include <bits/stdc++.h>
#define lli long long
#define M 1000000007
using namespace std;
bool vis[11][11][11][11][5];
lli dp[11][11][11][11][5];
lli f(int a, int b, int c, int d, int prev)
{
	if ( !a && !b && !c && !d ) return 1;
	if ( vis[a][b][c][d][prev] ) return dp[a][b][c][d][prev];
	vis[a][b][c][d][prev] = true;
	lli ans = 0;
	if ( prev == 0 ) {
		if ( a ) ans = ans + f(a - 1, b , c, d , 1);
		if ( b ) ans = ans + f(a, b - 1 , c, d , 2);
		if ( c ) ans = ans + f(a, b , c - 1, d , 3);
		if ( d ) ans = ans + f(a, b , c, d - 1 , 4);
	}
	
	if ( prev == 1 ) {
		if ( b ) ans = ans + f(a, b - 1 , c, d , 2);
		if ( c ) ans = ans + f(a, b , c - 1, d , 3);
		if ( d ) ans = ans + f(a, b , c, d - 1 , 4);
	}
	
	if ( prev == 2 ) {
		if ( a ) ans = ans + f(a - 1, b , c, d , 1);
		if ( c ) ans = ans + f(a, b , c - 1, d , 3);
		if ( d ) ans = ans + f(a, b , c, d - 1 , 4);
	}
	
	if ( prev == 3 ) {
		if ( a ) ans = ans + f(a - 1, b , c, d , 1);
		if ( b ) ans = ans + f(a, b - 1 , c, d , 2);
		if ( d ) ans = ans + f(a, b , c, d - 1 , 4);
	}
	
	if ( prev == 4 ) {
		if ( a ) ans = ans + f(a - 1, b , c, d , 1);
		if ( b ) ans = ans + f(a, b - 1 , c, d , 2);
		if ( c ) ans = ans + f(a, b , c - 1, d , 3);
	}
	
	dp[a][b][c][d][prev] = ans;
	return ans;
}
int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	assert(a >= 0 && b >= 0 && c >= 0 && d >= 0);
	assert(a <= 10 && b <= 10 && c <= 10 && d <= 10);
	lli ans = f(a,b,c,d,0);
	
	cout << ans << endl;
	return 0;
}
