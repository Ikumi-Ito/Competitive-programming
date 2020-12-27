#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const int MOD = 1000000007;
using pint = pair<ll, ll>;

int main() {
  ll N;
  cin >> N;
  ll cnt = 0;
  for (ll i = 1; i*i< N; i++){
    for (ll j = 1; j < N; j++){
      //cout << i << j << i * j << endl;
      if (i * j < N) {
        if (i == j) {
          cnt++;
          //cout << 'a' << endl;
        } else if (j * j >= N) {
          cnt += 2;
          //cout << 'b' << endl;
        }
        else{
          cnt++;
          //cout << 'c' << endl;
        }
      }
    } }
  cout << cnt << endl;
  return 0;
}