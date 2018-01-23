#include "bits/stdc++.h"
#define loop(i, n) for (int i = 0; i < n; i++)
#define msi multiset<int>
using namespace std;
typedef long long ll;
const int mx = 1e5 + 1;
int n;
int arr[mx];
msi ms[mx << 2];
msi merge(msi m1, msi m2) {
  msi m3;
  for (auto it = m1.begin(); it != m1.end(); it++) {
    m3.insert(*it);
  }
  for (auto it = m2.begin(); it != m2.end(); it++) {
    m3.insert(*it);
  }
  return m3;
}
ll func(int al, int am, int ar) { return 1LL * (am - al) * (ar - am); }
void build(int it, int st, int en) {
  if (st > en)
    return;
  if (st == en) {
    ms[it].insert(arr[st]);
    return;
  }
  build((it << 1) + 1, st, (st + en) >> 1);
  build((it << 1) + 2, ((st + en) >> 1) + 1, en);
  ms[it].clear();
  ms[it] = merge(ms[(it << 1) + 1], ms[(it << 1) + 2]);
}
void upd(int it, int st, int en, int idx, int prev, int val) {
  if (st > idx || en < idx || st > en)
    return;
  if (st == en) {
    auto itr = ms[it].find(prev);
    ms[it].erase(itr);
    ms[it].insert(val);
    return;
  }
  upd((it << 1) + 1, st, (st + en) >> 1, idx, prev, val);
  upd((it << 1) + 2, ((st + en) >> 1) + 1, en, idx, prev, val);
  auto itr1 = ms[it].find(prev);
  ms[it].erase(itr1);
  ms[it].insert(val);
}
ll query(int it, int st, int en, int l, int r, int p) {
  if (en < l || st > r)
    return -1;
  if (st >= l and r >= en) {
    ll mxx = 0;
    auto itr = ms[it].lower_bound(p / 2);
    mxx = max(mxx, func(arr[l], *itr, arr[r]));
    if (itr != ms[it].begin()) {
      itr--;
      mxx = max(mxx, func(arr[l], *itr, arr[r]));
    }
    return mxx;
  }
  return max(query((it << 1) + 1, st, (st + en) >> 1, l, r, p),
             query((it << 1) + 2, ((st + en) >> 1) + 1, en, l, r, p));
}
int main() {
  int t, q, qry, l, r, val;
  cin >> t;
  while (t--) {
    cin >> n >> q;
    loop(i, n) cin >> arr[i];
    loop(i, mx << 2) ms[i].clear();
    build(0, 0, n - 1);
    loop(i, q) {
      cin >> qry;
      if (qry == 1) {
        cin >> l >> r;
        cout << query(0, 0, n - 1, l - 1, r - 1, (arr[l - 1] + arr[r - 1]))
             << endl;
      } else {
        cin >> l >> val;
        upd(0, 0, n - 1, l - 1, arr[l - 1], val);
        arr[l - 1] = val;
      }
    }
  }
  return 0;
}
