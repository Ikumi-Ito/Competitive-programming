#include <bits/stdc++.h>
using namespace std;

int main() {
  char a[3];
  for(int i = 0; i < 3; i++) cin >> a[i];
  int count=1, check=0;
  for (int i = 0; i < 2; i++) {
    if(a[i] == 'R' && a[i+1] == 'R') count++;
    if(a[i] == 'R' || a[i+1] == 'R') check++;
    }
    if (check == 0) cout << 0 << endl;
    else if (count != 0) cout << count << endl;
    return 0;
}