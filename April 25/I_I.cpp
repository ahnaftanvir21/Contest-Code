#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
 
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
 
  int n; cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
 
  bool palin = true;
  int l = 1, r = n;
  int gc = 0;
  while (l < r) {
    palin &= a[l] == a[r];
    int d = abs(a[l] - a[r]);
    gc = __gcd(gc, d);
    l++, r--;
  }
 
  if (palin) {
    cout << -1 << '\n';
    return 0;
  }
 
  cout << gc << '\n';
 
  return 0;
}