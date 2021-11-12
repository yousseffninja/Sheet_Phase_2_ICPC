#include<bits/stdc++.h>

using namespace std;
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) x.begin(), x.end()

void IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(){
    //freopen("text.in", "r", stdin);
    //freopen("text.out", "w", stdout);
    int x, y, m, res = 0;
    cin >> x >> y >> m;
    for(int i = 0; x * i <= m; i++)
        for(int j = 0; x * i + y * j <= m; j++)
            if(x * i + y * j > res)
                res = x * i + y * j;
    cout << res << '\n';
}