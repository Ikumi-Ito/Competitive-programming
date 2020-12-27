#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const ll MOD = 1000000007;
using pint = pair<ll, ll>;

int main(){
    ll N, M, K;
    cin >> N >> M >> K;
    vector<ll> A(N), B(M);
    for (int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < M; i++)cin >> B[i];

    vector<ll> sum_A(1), sum_B(1);
    sum_A[0] = 0;
    sum_B[0] = 0;
    ll sum_a = 0, sum_b = 0;
    for (int i = 0; i < N; i++) {
      sum_a += A[i];
      sum_A.push_back(sum_a);
    }
    for(int i = 0; i < M; i++){
      sum_b += B[i];
      sum_B.push_back(sum_b);
    }
    ll out = -INF;
    ll best = M;
    for(int i = 0; i <= N; i++){
      if (sum_A[i] > K) break;
      for (int j = best;j>=0; j--) {
        if (sum_A[i] + sum_B[j] <= K) {
          best = j;
          out = max(out, i + best);
          break;
        }
      }
    }
    cout << out << endl;
    return 0;
}