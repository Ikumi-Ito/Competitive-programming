#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long int> A(n);
  for (int i = 0; i < n; i++){
    cin >> A[i];
  }
  long long int cnt = 0, st=0;
  for (int i = 1; i < n; i++){
    st = max(st, A[i - 1]);
    if (A[i] < st) {
      cnt += st-A[i];
    }
    else st = A[i];
  }
  cout << cnt << endl;
  return 0;
}
