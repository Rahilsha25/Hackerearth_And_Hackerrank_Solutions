#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define elif else if
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
set <string> st;
vector <string> vs;
string target;
bool Solution;
string reduce( string major, string minor)
{
  string ret;
  sort(major.begin(),major.end());
  sort(minor.begin(),minor.end());
  int i,j,n,m;
  n=major.size();
  m=minor.size();
  i=0;
  j=0;
  while(i<n && j<m)
  {
    if(major[i]==minor[j])
    {
      i++;
      j++;
      continue;
    }
    if(major[i]<minor[j]){
      ret+=major[i];
      i++;
    }
    else
      return "-1";
  }
  if(j==m)
  {
    while(i<n)
    {
      ret+=major[i];
      i++;
    }
    return ret;
  }
  return "-1";
}
void foo(int pos,string cur)
{
  if(cur.size()>target.size())
      return;
  if(pos==vs.size()/2)
  {
    sort(cur.begin(),cur.end());
    st.insert(cur);
   // cout<<cur<<endl;
    return;
  }
  foo(pos+1,cur);
  cur+=vs[pos];
  foo(pos+1,cur);
  return;
}
void boo(int pos, string cur)
{
  if(cur.size()>target.size())
      return;
  if(Solution)
    return;
  if(pos==vs.size())
  {
    sort(cur.begin(),cur.end());
    string tmp = target;
    tmp= reduce(target,cur);
    if(st.find(tmp)!=st.end())
    {
      //cout<<target<<" - "<<cur<<" = "<<tmp<<endl;
      Solution=true;
      return;
    }
    return;
  }
  boo(pos+1,cur);
  cur+=vs[pos];
  boo(pos+1,cur);
  return;
}
int main()
{
  // freopen("in.txt","r",stdin);
  // freopen("out","w",stdout);
  ios_base::sync_with_stdio(0);
  int t;
  cin>>t;
  assert(1<=t && t<=100);
  while(t--)
  {
    int n,i,j,ans=0;
    st.clear();
    cin>>n;
    Solution=false;
    vs.clear();
    vs.resize(n);
    string cur;
    rep(i,n)
      cin>>vs[i];
    cin>>target;
    sort(target.begin(),target.end());
    foo(0,cur);
    // for(auto it: st)
    //   cout<<it<<endl;
    cur="";
    boo(vs.size()/2,cur);
    if(Solution)
      cout<<"YES";
    else
      cout<<"NO";
    if(t>0)
      cout<<endl;
  }
 return 0;
}
