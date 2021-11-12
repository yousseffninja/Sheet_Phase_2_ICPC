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
    IO();
    //freopen("gymnastics.in", "r", stdin);
    //freopen("gymnastics.out", "w", stdout);
    int k, n, sum = 0;
    scanf("%d %d", &k, &n);
    int arr[k][n] ;
    for(int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int c1 = 1; c1 <= n; c1++){
        for(int c2 = 1; c2 <= n; c2++){
            if(c1 == c2)    continue;
            bool flag = true;
            for(int i = 0; i < k; i++){
                int temp1, temp2;
                for(int j = 0; j < n; j++){
                    if(arr[i][j] == c1)     temp1 = j;
                    if(arr[i][j] == c2)     temp2 = j;
                }
                if(temp1 > temp2)   flag = false;
            }
            if(flag)    sum++;
        }
    }
    printf("%d\n", sum);
}