#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll N, K;
  cin >> N >> K;
  vector<ll> p(N);
  for (int i = 0; i < N; ++i) cin >> p[i];
  ll out = 0;
  sort(p.begin(), p.end());
  for (int i = 0; i<K; ++i){
    out += p[i];
  }
  cout <<out << endl;
  return 0;
}