#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1 << 20;
ll t[N * 2], p[N * 2];
void build(int v, int tl, int tr) {
  p[v] = 0;
  if (tl == tr) {
    t[v] = tl;
    return;
  }
  int tm = (tl + tr) >> 1;
  build(v * 2, tl, tm);
  build(v * 2 + 1, tm + 1, tr);
  t[v] = max(t[v * 2], t[v * 2 + 1]);
}
void push(int v, int tl, int tr) {
  if (!p[v]) return;
  if (tl != tr) {
    p[v * 2] += p[v];
    p[v * 2 + 1] += p[v];
  }
  t[v] += p[v];
  p[v] = 0;
}
void add(int v, int tl, int tr, int l, int r, int x) {
  push(v, tl, tr);
  if (l > r) return;
  if (l == tl && r == tr) {
    p[v] += x;
    push(v, tl, tr);
    return;
  }
  int tm = (tl + tr) >> 1;
  add(v * 2, tl, tm, l, min(r, tm), x);
  add(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, x);
  t[v] = max(t[v * 2], t[v * 2 + 1]);
}
ll get(int v, int tl, int tr, int l, int r) {
  push(v, tl, tr);
  if (l > r) return -1;
  if (l == tl && r == tr) return t[v];
  int tm = (tl + tr) >> 1;
  return max(get(v * 2, tl, tm, l, min(r, tm)), get(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}
struct fenwick {
  int n;
  vector<ll> f;

  fenwick(int _n) : n(_n), f(_n) {}
  void add(int x, int y) {
    for (; x < n; x |= x + 1) f[x] += y;
  }
  ll get(int x) {
    ll res = 0;
    for (; x >= 0; x = (x & (x + 1)) - 1) res += f[x];
    return res;
  }
  ll get(int l, int r) {
    return get(r) - get(l - 1);
  }
};

int main() {
  int q;
  scanf("%d", &q);
  vector<int> x(q), d(q);
  build(1, 0, N - 1);
  fenwick f(N);
  for (int i = 0; i < q; i++) {
    char c;
    scanf(" %c", &c);
    if (c == '+') {
      scanf("%d%d", &x[i], &d[i]);
      add(1, 0, N - 1, 0, x[i], d[i]);
      f.add(x[i], d[i]);
    }
    if (c == '-') {
      int id;
      scanf("%d", &id);
      id--;
      add(1, 0, N - 1, 0, x[id], -d[id]);
      f.add(x[id], -d[id]);
    }
    if (c == '?') {
      int xx;
      scanf("%d", &xx);
      int ox = min(xx, N - 1);
      ll mx = get(1, 0, N - 1, 0, ox) - f.get(ox + 1, N - 1);
      mx = max(mx, (ll)xx);
      printf("%lld\n", mx - xx);
    }
  }
}
