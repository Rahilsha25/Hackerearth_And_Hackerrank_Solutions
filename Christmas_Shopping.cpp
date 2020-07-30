#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
int n, k, a[N];
ll ans;
void solve()
{
  sort(a, a + n);
  reverse(a, a + n);
  ans = 0;
  for (int i = 0;i < n;i++)
  {
    int id = i / k + 1;
    ans += 1ll * id * a[i];
  }
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin >> n >> k;
  for (int i = 0;i < n;i++) cin >> a[i];
  solve();
  cout << ans;
  return 0;
}
