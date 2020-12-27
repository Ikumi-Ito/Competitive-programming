#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> A(n + 1), B(n);
  for (int i = 0; i < n + 1; ++i) cin >> A[i];
  for (int i = 0; i < n; ++i) cin >> B[i];
  long long int count = 0, tmp = 0;
  for (int i = 0; i < n; ++i) {
    if (A[i] <= B[i] + tmp) {
      count += A[i];
      tmp = B[i] + tmp - A[i];
    } else if (A[i] > B[i] + tmp) {
      count += B[i] + tmp;
      tmp = 0;
    }
  }
  if (A[n] >= tmp)
    count += tmp;
  else
    count += A[n];
  cout << count << endl;
  return 0;
}