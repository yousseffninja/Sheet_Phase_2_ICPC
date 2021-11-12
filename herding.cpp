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
    freopen("herding.in.in", "r", stdin);
    freopen("herding.out", "w", stdout);
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c){
        int temp = c;
        c = b;
        b = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (c==a+2){
        cout << "0\n";
        }
    else if (b==a+2 || c==b+2){
        cout << "1\n";
    }
    else {
        cout << "2\n";
    }
    cout << max(b-a, c-b) - 1 << "\n";
    
}
