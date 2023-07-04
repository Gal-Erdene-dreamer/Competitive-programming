#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long long ull;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef pair<ll, ll> pll;

const ll oo = 0x3f3f3f3f3f3f3f3f;
const double eps = 1e-9;

#define FOR(i,a,b) for (ll i = (a); i < (b); i++)
#define FORD(i,a,b) for (ll i = ll(b)-1; i >= (a); i--)
#define MAPIT(i,c,k) for (auto i = (c).equal_range((k)).first; i!= (c).equal_range((k)).second; i++)

#define sz(c) ll((c).size())
#define all(c) (c).begin(), (c).end()
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define xx first
#define yy second
#define has(c, i) ((c).find(i) != (c).end())
#define DBG(X) ({ if(1) cerr << "DBGDO: " << (#X) << " = " << (X) << endl; })


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	ll H, W, N;

	cin >> H >> W >> N;

	map<pll, ll> colored;

	FOR(i, 0, N){
		int a, b;
		cin >> a >> b;
		a--;
		b--;

		FOR(j, -1, 2) FOR(k, -1, 2){
			int na = a + j;
			int nb = b + k;

			if(na < 0 || nb < 0 || na >= H || nb >= W) continue;

			colored[mp(na, nb)]++;
		}
	}

	vector<ll> erg(10);
	erg[0] = (H-2) * (W-2);
	for(auto& e : colored){
		if(e.xx.xx == 0 || e.xx.yy == 0 || e.xx.xx == H-1 || e.xx.yy == W-1) continue;

		erg[e.yy]++;
	}

	FOR(i, 1, 10) erg[0] -= erg[i];

	FOR(i, 0, 10) cout << erg[i] << endl;
}