#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin>>N;
    string s;
    while(N--) {
        cin>>s;
		int num1[1000]={0};
		int k=0;
		long long cnt=1;
		int num=0;
		for(int i=1;i<s.size();i++) {
		    if(s[i]==s[i-1])cnt++;
		    else {
		        num1[k++]=cnt;
		        if(k>3) break;
		        num++; cnt=1;
		    }
		}
		if(cnt>=1) {
		    num1[k++]=cnt;
		    num++;
		}
		if(num==3&&num1[0]==num1[1]&&num1[1]==num1[2] && s[0] != s[s.size() - 1])
			cout<<"OK"<<endl;
		else
			cout <<"Not OK"<<endl;
	}
}
