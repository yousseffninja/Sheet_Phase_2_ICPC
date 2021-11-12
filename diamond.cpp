#include<bits/stdc++.h>

using namespace std;
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>

void IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    //freopen("diamond.in", "r", stdin);
    //freopen("diamond.out", "w", stdout);
    int n, k, res = 0;
    cin >> n >> k;
    vi arr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.pb(x);
    }
    sort(all(arr));

    for(int i = 0; i < n; i++){
        int temp = 1;
        for(int j = i + 1; j < n; j++){
            if(arr[j] - arr[i] <= k){
                temp++;
            }
        }
        res = max(res, temp);
    }
    cout << res << '\n';
}