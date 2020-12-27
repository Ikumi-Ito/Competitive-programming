#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int bar[n], count = 0;
  for(int i = 0; i < n ;i++) cin >> bar[i];
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        int a = bar[i], b = bar[j], c = bar[k];
        if (a != b && b != c && a !=c) {
          if (a < b + c && b < a + c && c < a + b) count++;
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}