#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const ll MOD = 1000000007;
using ping = pair<ll, ll>;
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

int main(){
    string N;
    cin >> N;
    ll s = N.size();
    vector<ll> sum(s + 1, 0);
    for(int i=0; i<s; ++i){
      sum[i + 1] = sum[i] + N[i]-'0';
    }

    bool check = false;
    ll out = INF;
    for (ll i = 0; i < s; i++) {
      for (ll j = i + 1; j < s+1; j++){
        if ((sum[s] - (sum[j] - sum[i])) % 3 == 0 &&
            sum[s] - (sum[j] - sum[i])!=0) {
          out = min(out, j - i);
          check = true;
        }
      }
    }
    if (sum[s] % 3 == 0) {
        out = 0;
        check = true;
    }
    if (check) {
      cout << out << endl;
    } else {
      cout << -1 << endl;
    }
    return 0;
}