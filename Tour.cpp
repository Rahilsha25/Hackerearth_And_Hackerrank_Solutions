#include <bits/stdc++.h>

using namespace std;

map < string , int > p;                     
long long arr [1000 + 1][1000 + 1];


int main()
{
    long long n , m , tem1 , tem2, ans = 0;
    string s;

    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> s;
        p[s] = i;                      
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            cin >> tem1;
            arr[i][j] = tem1;        
        }
    }

    cin >> m;

    int last = 0;                     
    for(int i = 0; i < m; i++){

        cin >> s;
        ans += arr[last][p[s]];        
        last = p[s];                  
    }

    cout << ans << "\n";

    return 0;
}
