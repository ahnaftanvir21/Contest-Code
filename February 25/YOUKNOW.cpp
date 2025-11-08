#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MAX = 1e18;
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  vector<ll> ugly_nums;
  ll p2 = 1;
  for (int x = 0; p2 <= MAX; x++, p2 *= 2) {
    // p2 = 2^x
    ll p3 = 1;
    for (int y = 0; p2 * p3 <= MAX; y++, p3 *= 3) {
      // p3 = 3^y
      ll p5 = 1;
      for (int z = 0; p2 * p3 * p5 <= MAX; z++, p5 *= 5) {
        // p5 = 5^z
        ugly_nums.push_back(p2 * p3 * p5);
      }
    }
  }
  // cout << ugly_nums.size() << '\n'; // 10917 numbers under 10^18
  sort(ugly_nums.begin(), ugly_nums.end());
  cout << "The 1500'th ugly number is " << ugly_nums[1500 - 1] << ".\n";
  return 0;
}